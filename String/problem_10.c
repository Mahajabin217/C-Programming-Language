// HOW TO DO STRING LEXICOGRAPHICAL COMPARISON

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {

        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("SAME\n");
            break;
        }

        else if (a[i] == '\0')
        {
            printf("A IS SMALL\n");
            break;
        }

        else if (b[i] == '\0')
        {
            printf("B IS SMALL\n");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }

        else if (a[i] < b[i])
        {
            printf("A IS SMALL\n");
            break;
        }

        else
        {
            printf("B IS SMALL\n");
            break;
        }
    }
    return 0;
}

/*
INPUT: ab ab
       abc abcd
       abcd ab
OUTPUT:SAME
       A IS SMALL
       B IS SMALL
*/
