// // HOW TO TAKE STRING INPUT BY USING fgets()

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    char a[18];
    fgets(a,18,stdin);
    printf("%d", a);

    return 0;
}

