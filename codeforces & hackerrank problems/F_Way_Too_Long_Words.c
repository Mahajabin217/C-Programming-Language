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
        char c[101];
        scanf("%s",c);
        int len=strlen(c);
        if(len > 10)
        {
            printf("%c%d%c\n",c[0],len-2,c[len-1]);
        }
        else{
            printf("%s\n",c);
        }
    } 
    return 0;
}
