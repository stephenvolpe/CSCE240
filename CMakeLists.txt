cmake_minimum_required(VERSION 3.8)
project(hwprog3testdirectory)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        mydirectory/volpestephen_hw3/main.cc
        mydirectory/volpestephen_hw3/main.h
        mydirectory/volpestephen_hw3/parseintoxml.cc
        mydirectory/volpestephen_hw3/parseintoxml.h
        mydirectory/volpestephen_hw3/xmlitem.cc
        mydirectory/volpestephen_hw3/xmlitem.h
        mydirectory/volpestephen_hw3/xxpullinglog
        mydirectory/volpestephen_hw3/xxpullingstdout.txt
        mydirectory/volpestephen_hw3/zzuulog
        mydirectory/volpestephen_hw3/zzuustdout.txt
        testdirectory/volpestephen_hw3/main.cc
        testdirectory/volpestephen_hw3/main.h
        testdirectory/volpestephen_hw3/parseintoxml.cc
        testdirectory/volpestephen_hw3/parseintoxml.h
        testdirectory/volpestephen_hw3/xmlitem.cc
        testdirectory/volpestephen_hw3/xmlitem.h
        testdirectory/volpestephen_hw3/xxpullinglog
        testdirectory/volpestephen_hw3/xxpullingstdout.txt
        testdirectory/volpestephen_hw3/zlog.txt
        testdirectory/volpestephen_hw3/zstdout.txt
        testdirectory/volpestephen_hw3/zzuulog
        testdirectory/volpestephen_hw3/zzuustdout.txt
        Utilities/Matrix.h
        Utilities/MatrixIO.h
        Utilities/scanline.cc
        Utilities/scanline.h
        Utilities/scanner.cc
        Utilities/scanner.h
        Utilities/utils.cc
        Utilities/utils.h
        hwprog3.pdf
        makefile
        README.txt
        xxpulling.txt
        yysausage.txt
        zaZipUpScript.txt
        zbFileCopyScript.txt
        zcCompileScript.txt
        zdExecuteScript.txt
        zzuu.txt)

add_executable(hwprog3testdirectory ${SOURCE_FILES})