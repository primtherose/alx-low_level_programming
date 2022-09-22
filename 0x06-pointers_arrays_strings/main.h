#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strcat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src, int n);
char *spring_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infite_add(char *n1, char *n2, char *r, int size_r);
char *add_string(char *n1, char *n2, char *r, int r_index);

#endif /*MAIN_H*/
