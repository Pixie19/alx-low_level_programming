#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}