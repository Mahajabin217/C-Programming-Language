// BY USING LOGICAL OPERATOR,WE'LL FIND OUT THE CHARACTER IS VOWEL OR CONSONANT

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char ch = 'R';
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') // || is called OR operator
    {
        printf("%c is vowel\n", ch);
    }
    else
    {
        printf("%c is consonant\n", ch);
    }
    return 0;
}

// OUTPUT: R is consonant