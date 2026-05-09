*This project has been created as part of the 42 curriculum by ammirzae.*

# Libft – Your very first own library

## Description

Libft is a foundational 42 project that consists of coding a C library from scratch.  
It reimplements a set of standard C library functions (libc) and adds several additional utility functions for string manipulation, memory management, and linked list handling.
The library is designed to be portable and only relys on 3 external C library: `malloc`, `free`, and `write`.
## Instructions

### Compilation

The project includes a `Makefile` with the following rules:

- `all`       – Compiles the mandatory part and produces `libft.a`
- `clean`     – Removes object files (`.o`)
- `fclean`    – Removes object files and `libft.a`
- `re`        – Recompiles the whole project from scratch

To compile the library, simply run:

```bash
make
```

### Usage

In your C projects, include the header `libft.h` and link against the library:

```c
#include "libft.h"
```

Compile with:

```bash
cc -Wall -Wextra -Werror -I/path/to/libft.h your_program.c -L/path/to/libft.a -lft
```

(If `libft.h` is in the same directory, then the compiler will add it automatically)

### Functions Included

#### Part 1 – Reimplemented libc functions

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`
- `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`

#### Part 2 – Additional functions

- `ft_substr`   – Extract a substring
- `ft_strjoin`  – Concatenate two strings
- `ft_strtrim`  – Trim characters from beginning and end
- `ft_split`    – Split a string into an array of strings
- `ft_itoa`     – Convert integer to string
- `ft_strmapi`  – Apply a function to each character, creating a new string
- `ft_striteri` – Apply a function to each character (in‑place)
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` – Output to a file descriptor

#### Part 3 – Linked list functions

- `ft_lstnew`       – Create a new list node
- `ft_lstadd_front` – Add node at the beginning
- `ft_lstsize`      – Count nodes
- `ft_lstlast`      – Get the last node
- `ft_lstadd_back`  – Add node at the end
- `ft_lstdelone`    – Delete a single node
- `ft_lstclear`     – Delete an entire list
- `ft_lstiter`      – Apply a function to each node’s content
- `ft_lstmap`       – Create a new list by applying a function to each node

## Technical Implementation

### NULL Pointer Handling – A Deliberate Design Choice

None of the **Part 1 functions** (reimplemented libc functions) perform any NULL pointer checks. This is an intentional design decision that strictly follows the behavior of the original standard C library.
Passing a `NULL` pointer to those functions will  lead to **undefined behavior** – typically a segmentation fault.

## Resources

- [42 Norm] – Coding standard for 42 projects
- [C standard library documentation](https://en.cppreference.com/w/c/header) – Reference for original libc functions
- [Makefile Tutorial](https://makefiletutorial.com/) – Understanding Makefile

### AI usage

During this project, AI (primarily DeepSeek) was used for the following tasks:
- Formatting this README according to the project requirements.
- Help with correcting mistakes and double checking some funtions.
AI did not provide complete function implementations; it was used as a complementary learning tool.

