// HOW TO FIND OUT THE LENGTH OF A STRING BY USING strlen() FUNCTION

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int length = strlen(a);
    printf("%d\n", length);
    return 0;
}

/*
INPUT:RITU
OUTPUT:4
*/