CC = gcc
CFLAGS ?= -Wall -Wextra -Wpedantic -std=c11
.RECIPEPREFIX := >

TOPICS = \
src/01_basics/hello_world.c \
src/02_control_flow/grade_calculator.c \
src/03_functions/math_utils_demo.c \
src/04_arrays_strings/string_ops.c \
src/05_pointers/pointer_basics.c \
src/06_structs_unions/student_struct.c \
src/07_dynamic_memory/dynamic_array.c \
src/08_file_handling/file_copy.c \
src/09_data_structures/stack_array.c \
src/10_algorithms/binary_search.c \
src/11_system_programming/cli_args_demo.c

BINS = $(TOPICS:.c=.exe)

all: $(BINS)

%.exe: %.c
>$(CC) $(CFLAGS) $< -o $@

clean:
>rm -f $(BINS)

.PHONY: all clean
