Example of C++ project skeleton with Meson Build and Catch. 

This project consists of:
- a library (let's name it `luuid`)
- an executable `uuidgen` using that `luuid`
- unit test executable for `luuid` and using Catch framework 

This project was created as learning example for article: [Choosing C++ stack](https://carlosvin.github.io/posts/choosing-modern-cpp-stack)

Catch vs Doctest (2 branches)
=============================

Both test frameworks are quite similar, you can check differencies here: https://github.com/onqtam/doctest/blob/master/doc/markdown/faq.md#how-is-doctest-different-from-catch

I've created project using both frameworks you can find them in corresponding branches: [doctest branch](https://github.com/carlosvin/uuid-cpp/tree/doctest)
 and [catch](https://github.com/carlosvin/uuid-cpp/tree/catch). 

For now I will merge doctest branch to master, both are quite similar, but doctest is supposed to be lighter and faster. 


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
Running `uuidgen` is a little bit more difficult in this case because the installation directory might not belong to library path (`LD_LIBRARY_PATH`). 

```bash
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./install/usr/local/lib
./install/usr/local/bin/uuidgen #path to installed binary
```
