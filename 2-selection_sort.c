#include "sort.h"
/**
 * selection_sort- insertion sort algorithm
 * @array: list
 * @size: size
 * Return: sorted array
 */
void selection_sort(int *array, size_t size)
{
size_t position = 0, first = 0, min = 0;
int temp = 0;

for (first = 0; first < size; first++)
{
min = first;

for (position = first + 1; position < size; position++)
{
if (array[position] < array[min])
{
min = position;
}
}
if (min != first)
{
temp = array[first];
array[first] = array[min];
array[min] = temp;
print_array(array, size);
}
}
}
