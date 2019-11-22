#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

char **_tokenizar(char *line, char *DEL);
char *_read_line(ssize_t * c);
#endif /* HOLBERTON_H */