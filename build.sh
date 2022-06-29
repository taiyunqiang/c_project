test -e build/ || mkdir build
echo "mkdir build/"
test -e bin/ || mkdir bin
echo "mkdir bin/"
rm -rf bin/*
cd build
cmake ..
make
../bin/hello_test