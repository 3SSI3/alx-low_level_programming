# C- Makefiles
The *make* utility is a software tool for managing and maintaining
computer programs consisting many component files. The make utility
automatically determines which pieces of a large program need to be
recompiled, and issues commands to recompile them.

__Makefile__ is a set of commands (similar to terminal commands) with variable names and targets to create object file and to remove them

## Files Created and their Description 📚
| **FILES** | **DESCRIPTION** |
| --- | --- |
| __0-Makefile__ | Name of the excecutable: **school** |
| | Rules: **all**(builds your executable) |
| | Variables: none |
| | |
| __1-Makefile__ | Name of the executable: **school** |
| | Rules: **all**(builds your executabe) |
| | Variables: **CC**, **SRC** |
| | |
| __2-Makefile__ | Name of the executable: **school** |
| | Rules: **all**(builds your executable) |
| | Varibales: **CC, SRC, OBJ, NAME** |
| | |
| __3-Makefile__ | Name of the executable: **school** |
| | Rules: **all, clean, oclean, fclean, re** |
| | Variables: **CC, SRC, OBJ, NAME, RM** |
| | |
| __4-Makefile__ | Name of the executable: **school** |
| | Rules: **all, clean, oclean, fclean, re** |
| | Variables: **CC, SRC, OBJ, NAME, RM, CFLAGS** |
| | |
| __100-Makefile__ | Name of the executable: **school** |
| | Rules: **all, clean, oclean, fclean, re** |
| | Variables: **CC, SRC, OBJ, NAME, RM, CFLAGS** |
           
           
           
 ### RULES 🧭       
- **clean** (deletes Emacs & vim temp files along with exectuable)
- **oclean** (deletes the objects files)
- **fclean** (deletes all Emacs & vim temp files, the executable and the obj files
- **re** (forces recompilation of all source files

### VARIABLES 🧭:
- **CC**: the compiler to be used
- **SRC**: the .c files
- **OBJ**: the .o files
- **NAME**: the name of the executable
- **RM**: the program to delete files
- **CFLAGS**: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
