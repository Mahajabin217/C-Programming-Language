#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,result;
    scanf("%d%d%d",&a,&b,&result); 
    
    result = a-b;
    if(result >= 0)
    {
        printf("%d\n",result);
    }
    else 
    {
        printf("0\n");
    }

    return 0;
}
