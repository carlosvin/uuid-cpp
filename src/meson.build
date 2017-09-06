libuuid = shared_library(
    'uuid', # library name
    'Uuid.cpp', # source files to be compiled
    include_directories : inc, # previously declared include directories in root :code:`meson.build`
    install : true) # :code:`libuuid` will be part of project installation

uuidgen = executable(
    'uuidgen', # executable name
    'main.cpp', # source files to be compiled
    include_directories : inc, # previously declared include directories in root :code:`meson.build`
    link_with : libuuid, # linking executable with shared previously declared shared library :code:`libuuid`
    install : true) # :code:`uuidgen` executable be part of project installation