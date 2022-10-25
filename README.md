# My C++ Library

## Installation

Add the library.cpp file to your project.<br>
Add the following line to your code:

```cpp
#include "library.cpp"
```

## Features

### Print a colored debug message

```cpp
ic("Hello World!");
```

You can pass a description as the first argument:

```cpp
ic("This is a debug message", "Hello World!");
```

### Execute shell commands

```cpp
cmd("ls");
```
