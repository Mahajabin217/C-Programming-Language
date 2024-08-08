#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int lenght = strlen(a);
    int is_palindrome = 1;
    int i =0;
    int j =lenght -1;
    while(i<j)
    {
        if(a[i] != a[j]){
            is_palindrome = 0;
        }
        i++;
        j--;
    } 
    if( is_palindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
