// TYPE - 2: RETURN +  NO PARAMETER

#include <stdio.h>

int sum() // Here is no parameter
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = a + b;
    return ans;
}

int main()
{
    int a = sum(); // Function call 
    printf("%d", a);
    return 0;
}

/*
INPUT: 10 15
OUTPUT: 25
*/