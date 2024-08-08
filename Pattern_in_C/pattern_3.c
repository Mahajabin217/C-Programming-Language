#include <stdio.h>
int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++) //Line print
        {
            printf("%d", j);
        }
        k++; // Line ses 
        printf("\n");
    }
    return 0;
}

/*
INPUT: 5
OUTPUT:1
       12
       123
       1234
       12345
*/