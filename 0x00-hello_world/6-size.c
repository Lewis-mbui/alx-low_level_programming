#include <stdio.h>
/**
 * main - A program that prints the siize of various C data types
 * Return: 0 (success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(li));
printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(lli));
printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
