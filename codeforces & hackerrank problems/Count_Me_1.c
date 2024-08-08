#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[26];
    for(int i=0; i< 26; i++)
    {
       scanf("%c",&a[i]);
    }
    int consonant=0;
    if(a >='a' && a<='z')
    {
        if(a =='a' ||a =='e' || a=='i' a=='o' || a=='u')
        {
            printf("%c",a);
        }
        else{
            consonant++;
        }
        
    }  
    return 0;

