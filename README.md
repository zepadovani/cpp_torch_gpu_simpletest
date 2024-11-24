# Description

This is a simple example of how to use libtorch in a C++ project with GPU acceleration. Very simple, based on the official documentation.

## Notes

(On Linux/Manjaro, amd64 here...)

If I do not specify a libtorch path, using the default path in my system, this code will use the CPU:

```
mkdir build && cd build
cmake ..
cmake --build . --config Release
```

If I download libtorch manually from https://pytorch.org/ (selected Stable > Linux > LibTorch > C++/Java > CUDA 12.4) and specify the path to the libtorch folder manually, this code will use the GPU:

```
mkdir build && cd build
cmake -DCMAKE_PREFIX_PATH=/path/to/libtorch/ ..
cmake --build . --config Release
```