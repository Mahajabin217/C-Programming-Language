// HOW TO PRINT 2D ARRAY'S ROW & COLUMN

#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // IF WE WANT TO PRINT EXACT ROW,

    int r;
    scanf("%d", &r);
    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[r][i]);
    }

    // IF WE WANT TO PRINT EXACT COLUMN,

    int c;
    scanf("%d", &c);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][c]);
    }

    return 0;
}

/*
FOR EXACT ROW,
INPUT: 5 3
       2 5 4
       1 2 3
       4 5 6
       7 8 9
       2 4 8
       2

OUTPUT:4 5 6

FOR EXACT COLUMN,
INPUT:5 3
      2 5 4
      1 2 3
      4 5 6
      7 8 9
      2 4 8
      1

OUTPUT:5 2 5 8 4
*/
