# Basic Calculator

A simple Qt-based GUI calculator implemented in C++ using CMake.

## Overview

This project provides a basic desktop calculator with a graphical interface. It supports:

- Addition
- Subtraction
- Multiplication
- Division

The calculator accepts two numeric inputs and performs the selected operation when the user clicks `OK`.

## Features

- Qt Widgets application
- Two operand input fields
- Operation selection buttons for `+`, `-`, `×`, and `÷`
- Result display label
- Error handling for invalid input
- Division-by-zero protection with a user-friendly error dialog

## Project Structure

- `main.cpp` — Qt application entry point
- `mainwindow.cpp` / `mainwindow.h` — main window logic and button handlers
- `calculator.cpp` / `calculator.h` — calculation logic and operation definitions
- `mainwindow.ui` — Qt Designer UI definition for the calculator window
- `CMakeLists.txt` — CMake project file for building the application
- `build.bat` — helper script to create the build folder and build with CMake

## Requirements

- C++17-compatible compiler
- CMake 3.16 or newer
- Qt 5 or Qt 6 with Widgets module installed
- A Windows build environment compatible with `MSYS Makefiles` if using `build.bat`

## Build Instructions

From the project root:

```bat
build.bat
```

This script will create a `my_build` directory, run `cmake .. -G "MSYS Makefiles"`, and then build the project with `make`.

Alternatively, you can build manually:

```bat
mkdir my_build
cd my_build
cmake ..
cmake --build .
```

## Run

After building, run the executable created in the build directory. For example:

```bat
my_build\BasicCalculator.exe
```

## Usage

1. Enter the first number in the first text input.
2. Enter the second number in the second text input.
3. Click one of the operator buttons to select the operation.
4. Click `OK` to compute the result.
5. The result appears in the result label.

If either input is invalid, the calculator displays an error message. Attempting to divide by zero triggers a Qt error dialog.

## Notes

- The UI is defined using Qt Designer in `mainwindow.ui`.
- The calculation logic is isolated in `calculator.cpp` and can be extended for additional operations.
