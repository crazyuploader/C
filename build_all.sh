#!/usr/bin/env bash

echo ""
echo "Compiling with GCC"
echo ""
for f in $(ls *.c); do echo "Compiling $f"; gcc $f; done
echo ""
echo "Build with GCC OK"
echo ""
echo ""
echo "Compiling with Clang"
echo ""
for f in $(ls *.c); do echo "Compiling $f"; clang $f; done
echo ""
echo "Build with Clang OK"
echo ""
