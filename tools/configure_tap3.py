# Purpose is to do the following:
# Reset files generated with asn1c
# Create readers and writers for each specification
# Create a cmake file for including the sources and hdrs to cmake.
# Create CMakeLists.txt for each specification

import os
from jinja2 import Environment, FileSystemLoader
from cmake_generator import generate_cmake_sources

project_location = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
tools_location = os.path.dirname(__file__)

path_to_asn1c_exe = "E:/repos/asn1c/asn1c/asn1c.exe"
src_path_template = os.path.join(tools_location, "reader_src_template.c")
hdr_path_template = os.path.join(tools_location, "reader_hdr_template.h")

readers = [("tap0301", project_location+"/specifications/tap3/reading/TAP0301.asn1"),
           ("tap0302", project_location+"/specifications/tap3/reading/TAP0302.asn1"),
           ("tap0303", project_location+"/specifications/tap3/reading/TAP0303.asn1"),
           ("tap0304", project_location+"/specifications/tap3/reading/TAP0304.asn1"),
        #    ("tap0309", project_location+"/specifications/tap3/reading/TAP0309.asn1"),
           ("tap0310", project_location+"/specifications/tap3/reading/TAP0310.asn1"),
        #    {"tap0311", project_location+"/specifications/tap3/reading/TAP0311.asn1"},
           ("tap0312", project_location+"/specifications/tap3/reading/TAP0312.asn1"),
           ]

# Todo
# Create CmakeList.txt also

def main():
    generate_reader_sources(readers, "readers")

def generate_reader_sources(specifications, location):
    sources_path = os.path.abspath(os.path.join(project_location, "src", location))
    for spec in specifications:
        current_project = os.path.join(sources_path, spec[0])
        current_project_generated = os.path.join(sources_path, spec[0], "generated")
        os.makedirs(current_project, exist_ok=True)
        #create_pdus(sources_path,spec[0],spec[1])
        generate_reader(current_project, {"name": spec[0]})
        generate_cmake_sources(current_project_generated, spec[0])
        generate_cmakelists()
        break

def generate_cmakelists():
    None

# Creates both reader and header sources from templates
def generate_reader(project_path, mappings):
    env = Environment(loader=FileSystemLoader(tools_location))
    src_template = env.get_template("reader_src_template.c")
    hdr_template = env.get_template("reader_src_template.c")
    src_content = src_template.render(mappings)
    hdr_content = hdr_template.render(mappings)
    write_src_file(os.path.join(project_path, mappings["name"]+"reader.c"), src_content)
    write_src_file(os.path.join(project_path, mappings["name"]+"reader.h"), hdr_content)

def generate_src(file_name):
    None

# Creates generated folder and calls asn1c to create PDUs
def create_pdus(sources_path, project_folder, specification_path):
    pdus_path = os.path.join(sources_path, project_folder, "generated")
    os.makedirs(pdus_path, exist_ok=True)
    sys_call = " ".join([path_to_asn1c_exe, "-D",pdus_path, specification_path])
    res = os.system(sys_call)
    return res

def get_file_content(file_path):
    with open(file_path, mode="r") as f:
        return f.read()
    
def write_src_file(file_path, content):
    with open(file_path, "w", encoding="utf-8") as f:
        f.write(content)

def reset_generated_sources():
    None

if __name__ == "__main__":
    main()
