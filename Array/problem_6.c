// HOW TO COPY ELEMENTS OF TWO ARRAYS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);

    int b[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int ans[n + m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }

    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}

/*
INPUT: 5
       30 40 50 60 70
       3
       80 90 100
OUTPUT:30 40 50 60 70 80 90 100
*/