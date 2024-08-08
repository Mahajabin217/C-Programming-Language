// HOW TO TAKE INPUT 2D ARRAY IN C

#include <stdio.h>
int main()
{
    int a[5][3];                // Declaring 2D array as Row[5] & Column[3]
    for (int i = 0; i < 5; i++) // Row
    {
        for (int j = 0; j < 3; j++) // Column
        {
            scanf("%d", &a[i][j]); // Input
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]); // Output
        }
        printf("\n");
    }

    return 0;
}

/*
INPUT: 2 5 4
       1 2 3
       4 5 6
       7 8 9
       2 4 8

OUTPUT:2 5 4
       1 2 3
       4 5 6
       7 8 9
       2 4 8
*/