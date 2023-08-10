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

printf("Size of a char: %zu byte(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(i));
printf("size of a long int: %zu byte(s)\n", sizeof(li));
printf("size of a long long int: %zu byte(s)\n", sizeof(lli));
printf("size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
