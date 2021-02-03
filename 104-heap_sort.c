#include "sort.h"
/**
 * heap_sort- insertion sort algorithm
 * @array: array
 * @size: size
 * Return: sorted array
 */

void heap_sort(int *array, size_t size)
{
int end, count = (int)size, temp;

heapify(array, count);
end = count - 1;

while (end > 0)
{
temp = array[end];
array[end] = array[0];
array[0] = temp;
end = end - 1;
print_array(array, count);
SiftDown(array, 0, end, count);
}
}

/**
 * heapify- insertion sort algorithm
 * @array: array
 * @count: count
 * Return: sorted array
 */

void heapify(int *array, size_t count)
{
int start = (count - 2) / 2;

while (start >= 0)
{
SiftDown(array, start, count - 1, count);
start = start - 1;
}
}

/**
 * SiftDown- insertion sort algorithm
 * @array: list
 * @start: start
 * @end: end
 * @count: count
 * Return: sorted array
 */

void SiftDown(int *array, int start, int end, int count)
{
int root = start;
int child;
int temporal;

while (root * 2 + 1 <= end)
{
child = root * 2 + 1;
if (child + 1 <= end && array[child] < array[child + 1])
{
child = child + 1;
}
if (array[root] < array[child])
{
temporal = array[root];
array[root] = array[child];
array[child] = temporal;
root = child;
print_array(array, count);
}
else
{
return;
}
}
}
