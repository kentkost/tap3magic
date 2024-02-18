# License
MIT.

# Introduction
This library is meant to be used to read TAP3 files.
At some point in future also write TAP3 files.

It will be split into two libraries. One for reading and one for writing since the specifications
varies depending on reading/writing and that necessitates cmake having different generated sources.

The PDU sources are generated using [asn1c](https://github.com/mouse07410/asn1c).

# Limits and functionality.
Currently it only supports reading of TAP3 files.
It supports following encodings: BER, DER, XER, JER, OER, UPER, and PER.

# How to compile

## Options

## Requirements
CMake, python, and a C99 compliant compiler

# How to test
There are currently no tests

# How to run it
You can test the generated libraries by using any of the wrappers.
Or try using the tests projects. However the test project is currently missing. 
Test cases for the all TAP3 versions except TAP03.11.

# Contribute
You may open pull requests if you've found a bug that you have fixed.
Don't expect me to make major changes to the project. I am not too invested in this.
I'd rather focus my time on making my own ASN.1 parser to replace asn1c.