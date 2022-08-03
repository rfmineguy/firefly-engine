echo "==========================="
echo "Building editor"
echo "==========================="

if [ ! -d "${PWD}/build/" ]; then
    mkdir build
fi

cd build/
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build .
./firefly-engine-editor-exec
