*This project has been created as part of the 42 curriculum by brhimi.*

# Libft

## Description

**Libft** is a project from the 42 curriculum that consists of creating a personal C library by reimplementing standard C library functions and developing additional utility functions.

The main goal of this project is to understand how fundamental C functions work internally, improve memory management skills, and build a reusable library for future projects.

The library includes functions for character classification, string manipulation, memory manipulation, number conversion, file descriptor output, and linked list management.

## Functions

### 1. Libc Functions

Reimplementations of standard C library functions, prefixed with `ft_`.

**Character Classification**
- `ft_isalpha` — Checks whether a character is alphabetic.
- `ft_isdigit` — Checks whether a character is a digit.
- `ft_isalnum` — Checks whether a character is alphanumeric.
- `ft_isascii` — Checks whether a character belongs to the ASCII character set.
- `ft_isprint` — Checks whether a character is printable.

**String Functions**
- `ft_strlen` — Calculates the length of a string.
- `ft_strlcpy` — Copies a string with size limitation.
- `ft_strlcat` — Concatenates strings with size limitation.
- `ft_strchr` — Finds the first occurrence of a character.
- `ft_strrchr` — Finds the last occurrence of a character.
- `ft_strncmp` — Compares two strings up to a specified length.
- `ft_strnstr` — Searches for a substring within a limited length.
- `ft_strdup` — Duplicates a string.

**Memory Functions**
- `ft_memset` — Fills a memory area with a specified byte.
- `ft_bzero` — Sets a memory area to zero.
- `ft_memcpy` — Copies memory from one location to another.
- `ft_memmove` — Copies memory safely when regions overlap.
- `ft_memchr` — Searches for a byte in a memory area.
- `ft_memcmp` — Compares two memory areas.
- `ft_calloc` — Allocates and initializes memory to zero.

**Other Functions**
- `ft_toupper` — Converts a lowercase letter to uppercase.
- `ft_tolower` — Converts an uppercase letter to lowercase.
- `ft_atoi` — Converts a string to an integer.

### 2. Additional Functions

Utility functions developed to simplify common programming tasks.

- `ft_substr` — Extracts a substring from a string.
- `ft_strjoin` — Concatenates two strings into a newly allocated string.
- `ft_strtrim` — Removes specified characters from the beginning and end of a string.
- `ft_split` — Splits a string into an array of strings using a delimiter.
- `ft_itoa` — Converts an integer into a string.
- `ft_strmapi` — Creates a new string by applying a function to each character.
- `ft_striteri` — Applies a function to each character of a string.
- `ft_putchar_fd` — Writes a character to a file descriptor.
- `ft_putstr_fd` — Writes a string to a file descriptor.
- `ft_putendl_fd` — Writes a string followed by a newline.
- `ft_putnbr_fd` — Writes an integer to a file descriptor.

### 3. Linked List Functions

Functions for creating, traversing, modifying, and deleting singly linked lists.

- `ft_lstnew` — Creates a new list node.
- `ft_lstadd_front` — Adds a node at the beginning of a list.
- `ft_lstsize` — Counts the number of nodes.
- `ft_lstlast` — Returns the last node.
- `ft_lstadd_back` — Adds a node at the end of a list.
- `ft_lstdelone` — Deletes one node and frees its content using a provided function.
- `ft_lstclear` — Deletes an entire list and frees its nodes and contents.
- `ft_lstiter` — Applies a function to every node's content.
- `ft_lstmap` — Creates a new list by applying a function to each node's content.

## Instructions

### Requirements

- A C compiler (`cc`).
- `make`.
- The `ar` utility to create the static library.

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

This generates the static library `libft.a`.

Available Makefile rules:

```bash
make        # Compile the library
make all    # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild the library
```

### Using the Library

Include `libft.h` in your C source file and link the library during compilation.

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, Libft!\n", 1);
    return (0);
}
```

Compile the program:

```bash
cc main.c -L. -lft -o program
```

Run it:

```bash
./program
```

## Technical Considerations

- The project is written in C and follows the 42 Norm.
- Compilation uses `-Wall -Wextra -Werror`.
- The library is built as a static archive named `libft.a`.
- Dynamic memory allocation is handled carefully, with appropriate memory deallocation.
- Helper functions are declared `static` when appropriate.
- The library is designed to be reusable in future C projects.

## Resources

- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)

### AI Usage

AI tools were used as a learning aid to clarify C programming concepts, understand function behavior, investigate errors, and support debugging.

The implementation and understanding of the functions remain the responsibility of the student. AI-generated explanations were used to support learning rather than replace it.

## Author

**brhimi** — 1337 Student
