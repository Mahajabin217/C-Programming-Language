// HOW TO STRING INITIALIZE AND PRINT

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

/*
OUTPUT:10 20 30 40 50
*/