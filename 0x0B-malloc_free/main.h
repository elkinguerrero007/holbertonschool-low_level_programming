#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);
char *create_array(unsigned int, char);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
#endif
