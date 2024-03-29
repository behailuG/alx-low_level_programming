#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
int checkBinary(const char *binary);
unsigned int binary_to_uint(const char *b);
char _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif
