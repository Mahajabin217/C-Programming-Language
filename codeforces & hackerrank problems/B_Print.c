#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int num(int n)
{
    for(int i=1; i<n; i++)
    {
        printf("%d",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    num(n);
    return 0;
}
