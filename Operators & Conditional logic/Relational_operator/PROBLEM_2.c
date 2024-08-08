// BY USING RELATIONAL OPERATORS & IF-ELSE STATEMENT, WE'LL FIND OUT IF N IS POSITIVe, NEGATIVE OR ZERO

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    n = 10;
    if (n < 0)
    {
        printf("The number is negative\n");
    }
    else if (n > 0)
    {
        printf("The number is positive\n");
    }
    else if (n == 0)
    {
        printf("The number is zero\n");
    }
    return 0;
}
