#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int n)
{
    if(n <= 1) return;
    printf("%d ",n);
    printf("");
    fun(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n); 
    printf("1");
    return 0;
}
