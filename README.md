Example of C++ project skeleton with Meson Build and Catch Edit. 

This project consists of:
- a library (lets name it `luuid`)
- an executable `uuidgen` using that `luuid`
- unit test executable testing `luuid` and using Catch framework 

This project was created as learning example for article: [Choosing C++ stack](https://carlosvin.github.io/posts/choosing-modern-cpp-stack)


How to build the example
========================

```bash
meson build .
cd build
ninja
ninja test # to run unit tests
```

How to test
===========

```bash
ninja test
```

How to install
==============

In default system directory
---------------------------
```bash
ninja install
```

You can run it just with command `uuidgen`.


In specific directory, e.g: ./install
-------------------------------------

```bash
DESTDIR=./install ninja install
```
Runnig `uuidgen` is a little bit more difficult because install dir might not belong to library path. 

```bash
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./install/usr/local/lib
./install/usr/local/bin/uuidgen #path to installed binary
```
