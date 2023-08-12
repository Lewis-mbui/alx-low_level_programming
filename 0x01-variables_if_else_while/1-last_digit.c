#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that determines the nature of the last digit of a number n
 * Return: 0 (sucess)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if ((last_digit < 6) && (last_digit == 0))
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is ", n, last_digit);
		printf("less than 6 and not 0\n");
	}
	/* your code goes there */
	return (0);
}
