import os
import sys

c_files_to_exclude = ["converter-example.c"]
sources_filename = "_sources.cmake"

def main():
    source_extension = ".c"
    header_extension = ".h"
    cwd = sys.argv[1]
    libname = sys.argv[2]

    # Test code
    # cwd = "E:/repos/tap3reader/src/readers/TAP0311"
    # libname = "TAP0311"
    module_sources = libname+"_MODULE_SOURCES"
    module_headers = libname+"_MODULE_HEADERS"
    libcodec_la_sources = "lib"+ libname.lower() + "codec_la_SOURCES"

    src_files = get_all_files_with_extension(cwd,source_extension, c_files_to_exclude)
    hdr_files = get_all_files_with_extension(cwd,header_extension)
    result = write_cmake_sources(cwd, src_files, hdr_files, module_sources, module_headers, libcodec_la_sources)

    if result:
        print("Successfully wrote a cmake file for sources")
    else:
        print("Failed")

def get_all_files_with_extension(path:str, extension:str, exclusions:list=[]):
    files = os.listdir(path)
    files = list(filter(lambda input: ends_with_extension(input, extension), files))
    files = [ s for s in files if s.lower() not in exclusions]
    return files

def write_cmake_sources(cwd:str, source_files:list, header_files:list, module_srcs:str, module_hdrs:str, libcodec_name:str):
    srcs = [ "\t${CMAKE_CURRENT_LIST_DIR}/"+s+"\n" for s in source_files]
    hdrs = [ "\t${CMAKE_CURRENT_LIST_DIR}/"+h+"\n" for h in header_files]
    filepath = os.path.join(cwd,sources_filename)
    with open(filepath, "w") as f:
        # Write source files
        f.write("SET("+module_srcs+"\n")
        f.writelines(srcs)
        f.write(")"+"\n\n")
        # Write header files
        f.write("SET("+module_hdrs+"\n")
        f.writelines(hdrs)
        f.write(")"+"\n\n")
        # Write lib sources
        f.write("SET("+ " ".join([libcodec_name, module_srcs, module_hdrs])+")")
    
    return True


def ends_with_extension(input:str, extension:str):
    if input.endswith(extension):
        return True
    return False

if __name__ == "__main__":
    main()
