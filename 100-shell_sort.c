#include "sort.h"
/**
 * shell_sort - insertion sort algorithm
 * @array: list
 * @size: size
 * Return: sorted array
 */
void shell_sort(int *array, size_t size)
{
int temp;
size_t dist, i, j;

dist = 1;
if (size < 2 || !array)
{
return;
}
while (dist < size / 3)
{
dist = dist * 3 + 1;
}
while (dist > 0)
{
for (i = dist; i < size; i++)
{
temp = array[i];
for (j = i; j >= dist && temp < array[j - dist]; j = j - dist)
{
array[j] = array[j - dist];
}
array[j] = temp;
}
dist = dist / 3;
print_array(array, size);
}
}
