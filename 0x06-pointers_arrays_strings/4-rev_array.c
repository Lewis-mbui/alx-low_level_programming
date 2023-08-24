#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int left = 0;

	int right = n - 1;

	while (left < right)
	{
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
