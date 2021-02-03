#include "sort.h"
/**
 * insertion_sort_list- insertion sort algorithm
 * @list: list
 * Return: sorted array
 */
void TopDownSplitMerge(int B[], int left, int right, int A[])
{
    int middle;
    int k;
    int i;
    int j;

    if (right - left <= 1)
    {
        return;
    }
    else
    {
        middle = (left + right + 1)/2;
        TopDownSplitMerge(A, left, middle - 1, B);
        TopDownSplitMerge(A, middle, right, B);
    }

    i = left;
    j = middle;

    for (k = left; k < right; k++)
    {
        if (i < middle && (j >= right || A[i] <= A[j]))
        {
            B[k] = B[i];
            i = i + 1;
        }
        else
        {
            B[k] = A[i];
            j = j + 1;
        }
    }
}

void CopyArray(int A[], int left, int right, int B[])
{
    int k;

    for(k = left; k < right; k++)
        B[k] = A[k];
}

void merge_sort(int *array, size_t size)
{
	int n = (int)size;
	size_t *b_array;

	b_array = malloc(sizeof(int) * size);
	CopyArray(array, 0, n, b_array);
	TopDownSplitMerge(b_array, 0, n, array);
}
