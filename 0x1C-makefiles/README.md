# 0x1C. C - Makefiles
## Objectives
- To have a good understanding of `make` and Makefiles.

## TASKS
### Rules
- `all`: builds your executable
- `clean`: deletes all Emacs and Vim temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
- `re`: forces recompilation of all source files

### Variables
- `CC`: the compiler to be used
- `SRC`: the .c files
- `OBJ`: the .o files
- `NAME`: the name of the executable
- `RM`: the program to delete files
- `CFLAGS`: your favorite compiler flags: -Wall -Werror -Wextra -pedantic

### 0
- Creating a Makefile implementing `all` and having no variables.

### 1
- Add `CC` and `SRC` variables

### 2
- Add `OBJ` and `NAME` variables

### 3
- Implement `all`, `clean`, `oclean`, `fclean`, `re` rules.
- Add `RM` variable

### 4
- Add `CFLAGS`
