echo Building C Files Now
echo
echo Compiling with GCC
for f in $(ls *.c); do echo "Compiling $f with GCC"; gcc $f; done
echo
echo Compiling with Clang
for f in $(ls *.c); do echo "Compiling $f with Clang"; clang $f; done