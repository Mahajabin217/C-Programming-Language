#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    int num1=N/10;
    int num2=N%10;  
    if (num1 == 0 || num2 == 0 || num1 % num2 == 0 || num2 % num1 == 0 )
    {
        printf("YES\n");
    } 
    else{
        printf("NO\n");
    }
    return 0;
}
