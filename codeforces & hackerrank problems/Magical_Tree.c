#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void pattern (int n)
{
int l=(n-1)/2+6;
int sp=l-1;
int s=1;
for(int i=1; i<=l; i++)
    {
        for(int j=1; j<=sp; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=s; k++)
        {
            printf("*");
        }
            sp--;
            s = s+2;
            printf("\n");
    }
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=n; k++)
        {
            printf("*");
        }
            printf("\n");
    }
}
int main()
{
    int n;
    do
    {
    scanf("%d",&n);
    }
    while(n%2 == 0);
    pattern(n);  
    return 0;
}
