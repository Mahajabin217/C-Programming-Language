// TYPE - 3: NO RETURN + PARAMETER

#include <stdio.h>

void sum(int x, int y) // void function can't return 
{
    int s = x + y;
    printf("%d\n", s);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    sum(a, b); // Function call 
    return 0;
}

/*
INPUT: 10 15
OUTPUT: 25
*/