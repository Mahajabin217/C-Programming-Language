// HOW TO SUM OF AN ARRAY

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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    printf("%d", sum);
    return 0;
}

/* INPUT: 5
         10 20 30 40 50
OUTPUT:  150   */