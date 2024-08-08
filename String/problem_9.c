//HOW TO COPY A STRING FROM ANOTHER STRING (2ND WAY - USING strcpy() FUNCTION):

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);

    strcpy(b,a);

    printf("%s %s", a, b);

    return 0;
}

/*
INPUT: apple orange
OUTPUT:orange orange
*/