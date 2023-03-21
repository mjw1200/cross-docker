# Linux-on-Windows

This is the same counter program as implemented in windows-on-linux, except it goes the other way: it'll run on Linux, but it can also run in a Docker container running on Windows.

To build this image, I had to put the source in the container and build it there, since Windows doesn't know WTF "make" and "cc" are. I initially tried to build locally and stick the binary in the docker image, but that didn't work.

You can run this locally with `docker run mjwoptimizely/linux-on-windows` (which works on both Linux and Windows, but running a Linux program on Linux isn't super-exciting.)
