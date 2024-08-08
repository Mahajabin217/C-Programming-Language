// HOW round() FUNCTION WORKS

#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    int ans = round(x);
    printf("%d", ans);
}

/*
INPUT: 4.999
OUTPUT:5
*/