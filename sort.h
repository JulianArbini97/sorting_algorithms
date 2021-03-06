#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *array, int position1, int position2);
void shell_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void TopDownSplitMerge(int B[], int left, int right, int A[]);
void CopyArray(int A[], int left, int right, int B[]);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t count);
void SiftDown(int *array, int start, int end, int count);
void radix_sort(int *array, size_t size);

#endif
