## CPP STL

This directory contains Standard Template Library Exercises

Note:
How to install gtest/gmock

sudo apt-get install -y google-mock
sudo apt-get install libgtest-dev

sudo apt-get install cmake # install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
 
# copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
sudo cp -a *.a /usr/lib

cd /usr/src/gmock
sudo cmake CMakeLists.txt
sudo make

# copy or symlink libgmock.a and libgmock_main.a to your /usr/lib folder
sudo cp -a *.a /usr/lib
