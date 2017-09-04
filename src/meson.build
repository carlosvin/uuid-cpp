
uuid_sources = ['Uuid.cpp']

uuidlib = shared_library('uuid',
                        uuid_sources,
                        include_directories : inc,
                        install : true)


uuidgen = executable('uuidgen', 'main.cpp',
                     include_directories : inc,
                     link_with : uuidlib,
                     install : true)

