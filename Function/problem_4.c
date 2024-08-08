// TYPE - 4: NO RETURN + NO PARAMETER

#include <stdio.h>

void sum(void) // Here is no parameter & can't return  
{
    int x, y;
    scanf("%d%d", &x, &y);
    int s = x + y;
    printf("%d\n", s);
}

int main()
{
    sum(); // Function call 
    return 0;
}

/*
INPUT: 10 15
OUTPUT: 25
*/