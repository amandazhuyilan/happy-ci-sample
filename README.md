## Happy CI Sample

Here lives a happy CI (Continuous Integration) Sample.

There will be a simple C++ CMake project and a Python Project that will be tested, built and deployed automatically, per commit.

![C++ Project workflow](https://github.com/amandazhuyilan/happy-ci-sample/actions/workflows/c-cpp.yml/badge.svg?event=push)

## C++ Project
A simple C++ project taken from [Modern CMake](https://gitlab.com/CLIUtils/modern-cmake). 

![C++ Project workflow](https://github.com/amandazhuyilan/happy-ci-sample/actions/workflows/c-cpp.yml/badge.svg?event=push)

### Requirements
- OS: Ubuntu 20.04+
- `apt` packages:
    - `build-essential`
    - `CMake` (3.22+)
    - `gdb` (debugger, not necessary but handy for developers)

### How to Build Locally
```bash
mkdir -o build && cd build
cmake ..
make
```

## TODO
- Add simple python project