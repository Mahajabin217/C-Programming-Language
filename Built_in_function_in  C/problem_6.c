// HOW abs() FUNCTION WORKS

#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);
    int ans = abs(x);
    printf("%d", ans);
}

/*
INPUT: -123 50  (abs() always gives us Negative value to positive value & positive value to positive value )
OUTPUT: 123 50 
*/