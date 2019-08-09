# cpp_template

Example C++ project

This is an example CPP project including all the recommended continuous
integration steps as performed by GitLab runners. There is associated
documentation on the SKA developer portal.

Externals

As an example we have added 2 external projects. The googletest frameworks has been
added as an example of how to build an external cmake project for source.

We have also added the proposed SKA cmake repository and linked it into the top
level CMakeLists.txt file. The adds a find_dependencies macro - which parses
the depedencies.txt file and uses the CMake find_package() functionality to
locate it on your machine.


