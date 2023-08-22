import os
import sys

def main():
    source_extension = ".c"
    header_extension = ".h"
    cwd = sys.argv[1]
    src_files = get_all_files_with_extension(source_extension)
    hdr_files = get_all_files_with_extension(header_extension)
    result = write_cmake_sources(cwd, src_files, hdr_files)

    if result:
        print("Successfully wrote a cmake file for sources")
    else:
        print("Failed")

    d = os.getcwd()
    print(sys.argv)
    print(len(sys.argv))
    print("Hello World!: " +str(d))

def get_all_files_with_extension(extension):
    return ["all filenames"]

def write_cmake_sources(cwd:str, source_files:list, header_files:list):
    return True

if __name__ == "__main__":
    main()
