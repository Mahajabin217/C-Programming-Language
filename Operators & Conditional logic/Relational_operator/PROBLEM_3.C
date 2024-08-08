// BY USING RELATIONAL OPERATORS & IF-ELSE STATEMENT, WE'LL FIND OUT IF A NUMBER IS LESS THAN, GREATER THAN OR NOT EQUAL

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, m;
    n = 30;
    m = 20;
    if (n != m)
    {
        printf("n & m is not equal\n");
    }
    if (n <= m)
    {
        printf("n is less than of m\n");
    }
    else if (n >= m)
    {
        printf("m is greater than of n\n");
    }
    return 0;
}