#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number to print the times table for
 *
 * Return: void
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int result = i * j;
            if (j == 0)
                printf("%d", result);
            else
                printf(", %d", result < 100 ? result < 10 ? 3 : 2 : 1);
        }
        printf("\n");
    }
}
