#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char *str)
{
    int lenght=strlen(str);
    int i=0;
    int j=lenght-1;
    while(i < j){
        if(str[i] != str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s",s);
    if(is_palindrome (s)){
        printf("Palindrome\n");
    } 
    else{
        printf("Not Palindrome");
    }
    return 0;
}
