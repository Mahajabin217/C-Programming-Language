#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int solve=0;
    for(int i=0; i<n; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c >= 2)
        {
            solve++;
        }
    } 
    printf("%d\n",solve);
    return 0;
}
