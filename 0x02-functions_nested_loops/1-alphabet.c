#include "main.h"

/**
 *main -print alphabet in lowercase, followed by a new line.
 *
 *desc  print alphaphet 
 */
void print_alphabet(void)
{
char ch;
ch = 'a';
 while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
