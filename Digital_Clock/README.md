# Digital Clock in C

## Overview

This is a simple digital clock program written in C that displays the current time in either a 24-hour or 12-hour format based on user input.

## Features

- Displays the current time and date
- Supports both 24-hour and 12-hour formats
- Updates the time every second

## Requirements

- A C compiler (e.g., GCC)
- Standard C libraries

## How to Compile and Run

### Compilation

Use the following command to compile the program:

```bash
gcc digital_clock.c -o digital_clock
```

### Running the Program

After compiling, run the executable:

```bash
./digital_clock
```

You will be prompted to choose the time format:

```
DIGITAL CLOCK

Enter 1 for 24Hr format and 2 for 12Hr format:
```

Enter `1` for a 24-hour format or `2` for a 12-hour format.

## Code Explanation

The program consists of two main functions:

- `printTime24()`: Displays the current time in a 24-hour format.
- `printTime12()`: Displays the current time in a 12-hour format with AM/PM notation.

It uses the `time.h` library to fetch the current system time and format it using `strftime()`.

## Example Output

### 24-Hour Format

```
current time in 24-H format:
Monday, February 12, 2024
14:30:15
```

### 12-Hour Format

```
current time in 12-H format:
Monday, February 12, 2024
02:30:15 PM
```

## Author

Ayushi Sharma

## License

This project is open-source and available under the MIT License.

