# Install script for directory: C:/Users/cyril/Desktop/archi_cmake/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/DEV_LIST")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/common/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/array/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/list/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/exercices/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/stack/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/hash_table/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/file/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/wordle/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/hangman_game/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/lifeGame/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/algorithmie/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/fichier_binaire/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/arbre_binaire/cmake_install.cmake")
  include("C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/game/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Users/cyril/Desktop/archi_cmake/build/vs2022_build64/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
