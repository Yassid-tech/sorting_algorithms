#include "sort.h"
/**
 *exchange_integers - Exchange the values of two integers within an array
 *@a: Pointer to the first integer for the exchange operation
 *@b: Pointer to the second integer.
 */
void exchange_integers(int *a, int *b)
{
int temporary_holder;
temporary_holder = *a;
*a = *b;
*b = temporary_holder;
}

/**
 * bubble_sort - Sort an array of integers in asc order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
bool bubbly = false;
if (array == NULL || size < 2)
return;
while (bubbly == false)
{
bubbly = true;
for (i = 0; i < len - 1; i++)
{
if (array[i] > array[i + 1])
{
exchange_integers(array + i, array + i + 1);
print_array(array, size);
bubbly = false;
}
}
len--;
}
}
