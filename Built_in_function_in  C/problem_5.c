// HOW pow() FUNCTION WORKS

#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int ans = pow(x, y);
    printf("%d", ans);
}

/*
INPUT:3 4
OUTPUT:81
*/