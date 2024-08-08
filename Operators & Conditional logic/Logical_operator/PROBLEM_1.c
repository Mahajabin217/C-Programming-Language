// BY USING LOGICAL OPERATOR,WE'LL FIND OUT IF AN CHARACTER IS LOWER CASE OR UPPER CASE

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char ch = 'R';
    if (ch >= 'a' && ch <= 'z')  // && is called AND operator 
    {
        printf("%c is lower case\n", ch);
    }
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case\n", ch);
    }
    return 0;
}

//OUTPUT: R is upper case