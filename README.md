*This project has been created as part of the 42 curriculum by <your_login>.*

# ft_printf

## Description
ft_printf is a custom implementation of the original `printf()` function from the C standard library.

The goal of this project is to learn how variadic functions work in C and recreate the behavior of `printf` with different format specifiers.

Supported conversions:
- `%c` Character
- `%s` String
- `%p` Pointer address
- `%d` Decimal number
- `%i` Integer
- `%u` Unsigned integer
- `%x` Lowercase hexadecimal
- `%X` Uppercase hexadecimal
- `%%` Percent sign

## Instructions

### Compile the library
```bash
make
```

### Clean object files
```bash
make clean
```

### Remove object files and library
```bash
make fclean
```

### Recompile everything
```bash
make re
```

## Usage

Example:
```c
ft_printf("Hello %s!\n", "World");
```

## Files
- `ft_printf.c`
- `ft_printf.h`
- `Makefile`
- Helper source files

## Resources
- Linux man pages
- Variadic functions documentation
- 42 subject PDF

## Notes
This project was written in C following the 42 Norm.

<p align="right"><code>This project was completed in 12 November 2025.</code></p>
