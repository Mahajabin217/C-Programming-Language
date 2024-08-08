// HOW TO REVERSE OF AN ARRAY

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

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

/* INPUT: 5
          10 20 30 40 50 
OUTPUT:   50 40 30 20 10 */
