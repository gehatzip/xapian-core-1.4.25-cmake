Downloaded from:

https://oligarchy.co.uk/xapian/1.4.25/xapian-core-1.4.25.tar.xz

Unzipped with cygwin:

cd /cygdrive/c/Users/gehat/Downloads/

tar -xf xapian-core-1.4.25.tar.xz


Based on:
git clone https://github.com/amoldeshpande/xapian-core xapian-core-msvc

.. changes were applied in order to be built with CMake / MSVC:

- All 'CMakeLists.txt' from 'xapian-core' repo above were copied here and added extra source files where needed.
- Changed also 'safewindows.h' adding 'typedef SSIZE_T ssize_t;' like in 'xapian-core' repo.
- Included also 'safewindows.h' in 'io_utils.h'.
- Set also pls=0 in 'queryinternals.cc'
- Copied also 'version.h.in.cmake', 'version_h_cmake.txt', 'config_h_cmake.txt', 'config.h.in.cmake' from 'xapian-core' repo.


cd xapian-core-1.4.25-cmake

Install vcpkg in ../vcpkg with:
cd ..
git clone https://github.com/microsoft/vcpkg.git

Bootstrap vcpkg:
cd vcpkg && bootstrap-vcpkg.bat

Install zlib with vcpkg:
vcpkg install zlib:x64-windows-static

cd ../xapian-core-1.4.25-cmake

mkdir build

cd build

cmake .. --fresh

cmake --build .

*****************************
** To build as dll see also:
*****************************

CMakeLists_gehatzip_build_as_dll/CMakeLists.txt

Important: Static libraries can have unresolved symbols. Executables and dlls can't!
If built as dll note the lack of import .lib libraries (libgetopt, libxapian). This is because both don't have exported symbols otherwise they would be created:
See also:
https://stackoverflow.com/questions/68190911/is-it-possible-to-make-cmake-link-against-a-dll-directly-on-windows

***************************************************************************
** To build static libs (default) as release add the following definition:
***************************************************************************

target_compile_definitions(libxapian
PRIVATE HAVE_DECL_LOG2)

Remove 'driver.c' from the sources of 'languages/CMakeLists.txt'

cmake --build . --config Release

****************************************************************************************************************************************
* NOTE: This is the same as 'xapian-core-1.4.25-cmake' but cloned from github ("https://github.com/gehatzip/xapian-core-1.4.25-cmake") *
* commit changes of 'xapian-core-1.4.25-cmake' also here to sync with github                                                           *
****************************************************************************************************************************************
