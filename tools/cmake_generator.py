import os
import sys

def main():
    generate_cmake_sources(sys.argv[1], sys.argv[2])

def generate_cmake_sources(sources_location, libname):
    src_extension = ".c"
    hdr_extension = ".h"

    # module_sources = libname+"_MODULE_SOURCES"
    # module_headers = libname+"_MODULE_HEADERS"
    module_sources = "\"${CMAKE_PROJECT_NAME}_MODULE_SRCS\""
    module_headers = "\"${CMAKE_PROJECT_NAME}_MODULE_HDRS\""
    libcodec_la_sources = "lib"+ libname.lower() + "codec_la_SRCS"
    c_files_to_exclude = ["converter-example.c"]
    sources_filename = "_sources.cmake"
    cmake_file_path = os.path.join(sources_location, sources_filename)
    
    src_files = get_all_files_with_extension(sources_location, src_extension, c_files_to_exclude)
    hdr_files = get_all_files_with_extension(sources_location, hdr_extension)
    write_cmake_sources(cmake_file_path, src_files, hdr_files, module_sources, module_headers, libcodec_la_sources)

def get_all_files_with_extension(path:str, extension:str, exclusions:list=[]):
    files = os.listdir(path)
    files = list(filter(lambda input: ends_with_extension(input, extension), files))
    files = [ s for s in files if s.lower() not in exclusions]
    return files

def write_cmake_sources(file_path:str, source_files:list, header_files:list, module_srcs:str, module_hdrs:str, libcodec_name:str):
    srcs = [ "\t${CMAKE_CURRENT_LIST_DIR}/"+s+"\n" for s in source_files]
    hdrs = [ "\t${CMAKE_CURRENT_LIST_DIR}/"+h+"\n" for h in header_files]

    with open(file_path, "w") as f:
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