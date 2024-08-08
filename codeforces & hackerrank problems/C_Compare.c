#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char x[30], y[30];
    scanf("%s %s",x,y);
    int ans=strcmp(x,y);
    if(ans < 0)
    {
        printf("%s",x);
    }
    else if(ans > 0)
    {
        printf("%s",y);
    }
    else
    {
        printf("%s\n",x);
    }
    return 0;
}
