// HOW TO FIND OUT THE LENGTH OF A STRING BY USING WHILE LOOP

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char a[100];
    scanf("%s", a);

    int count = 0;

    int i = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }

    printf("%d\n", count);

    return 0;
}

/*
INPUT: RITU
OUTPUT:4
*/