# DSA practice in C

Here, you'll find some C functions I've written for different DSA-inspired exercises, along with unit tests in Unity.

## Required headers:
- [Unity](https://github.com/ThrowTheSwitch/Unity) 

## Setup

git clone https://github.com/ThrowTheSwitch/Unity.git third_party/Unity

## Running the tests

Makefile coming soon. Meanwhile :

Compile the test file you wish to run, while including the folders containing the header files, plus all source code

```
gcc -o build/hello_world.test.o tests/hello-world.test.c src/hello-world.c third_party/Unity/src/unity.c -I./third_party/Unity/src -I./src
```

Then run it

```
./build/hello-world.test.o
```

