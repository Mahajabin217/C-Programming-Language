// HOW TO DO STRING LEXICOGRAPHICAL COMPARISON BY USING strcmp() FUNCTION

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int ans = strcmp(a, b);

    printf("%d", ans);
    
    return 0;
}

/*
INPUT: ab ab
       abc abcd
       abcd ab
OUTPUT: 0
        -1
        1
*/