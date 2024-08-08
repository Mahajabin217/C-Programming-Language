#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if( x+y==z || y+z==x || x+z==y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    } 
    return 0;
}
