#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[26],sentence[100];   
    scanf("%c\n%s\n%[^\n]s",&ch,s,sentence);
    printf("%c\n%s\n%s",ch,s,sentence); 
    return 0;
}

    