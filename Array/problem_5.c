// HOW TO REVERSE OF AN ARRAY (TWO POINTERS TECHNIQUE)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

/* INPUT: 5
          10 20 30 40 50
OUTPUT:   50 40 30 20 10 */
