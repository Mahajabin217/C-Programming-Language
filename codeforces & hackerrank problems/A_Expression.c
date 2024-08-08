#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max  = a+b+c;
    int  value[4] ={a+b*c,a*(b+c),a*b*c,(a+b)*c};
    for(int i=0; i<4; i++)
    {
        if(value[i] > max)
        {
            max = value[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
