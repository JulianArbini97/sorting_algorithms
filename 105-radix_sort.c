#include "sort.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

void radix_sort(int *array, size_t size)
{
    int max_num = 0, itera = 1, base, x = 0;
    int c = 0, j, y = 0, i = 0, l = 0;
    int *sort, *dec;

    while (i < (int)size)
    {
        if (array[i] > max_num)
        {
            max_num = array[i];
        }
        i++;
    }

    while (max_num / 10 > 0)
    {
        itera++;
        max_num = max_num/10;
    }

    sort = malloc(sizeof(int) * size);
    dec = malloc(sizeof(int) * size);

    while (c <= (int)size)
    {
        dec[c] = array[c];
        c++;
    }

    while (itera > 0)
    {
        x = 0;
        printf("vuelta");
        for (base = 0; base < 10; base++)
        {
            for (j = 0; j < (int)size; j++)
            {
                if ((dec[j] % 10) == base)
                {
                    sort[x] = array[j];
                    x += 1;
                }
            }
        }
        while (y < (int)size)
        {
            dec[y] = sort[y] / 10;
            array[y] = sort[y];
            y++;
        }
        itera--;
    }
  for (l = 0; l < (int)size; l++)
    {
        printf("%d, ", sort[l]);
        array[l] = sort[l];
    }
}