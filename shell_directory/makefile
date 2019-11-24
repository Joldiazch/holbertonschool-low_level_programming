#
# Makefile for shell.c
#
all: shell
shell: 2-str_concat.c 4-free_list.c _concatenar.c _read_line.c main.c 2-add_node.c  _build_list.c _getenv.c _tokenizar.c
    gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
leaks: 2-str_concat.c 4-free_list.c _concatenar.c _read_line.c main.c 2-add_node.c  _build_list.c _getenv.c _tokenizar.c
    gcc -g -Wall -Werror -Wextra -pedantic *.c -o hsh && valgrind --leak-check=full --show-leak-kinds=all ./hsh
debug: 2-str_concat.c 4-free_list.c _concatenar.c _read_line.c main.c 2-add_node.c  _build_list.c _getenv.c _tokenizar.c
    gcc -ggdb -Wall -Werror -Wextra -pedantic *.c -o hsh
clean:
    rm -f hsh