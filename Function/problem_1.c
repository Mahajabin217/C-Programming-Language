// TYPE - 1: RETURN + PARAMETER

#include <stdio.h>

int sum(int x, int y) // Here, x & y is an parameter
{
    int sum = x + y;
    return sum;
}

int main()
{
    int a = sum(10, 20);
    printf("%d", a);
    return 0;
}

/*
OUTPUT: 30 (X=10,Y=20)
*/