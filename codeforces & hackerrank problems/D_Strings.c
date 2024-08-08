#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char x[11], y[11];
    scanf("%s %s",x,y);
    int len_1 = strlen(x);
    int len_2 = strlen(y);
    printf("%d %d\n%s%s\n",len_1,len_2,x,y);
    char temp = x[0];
    x[0] = y[0];
    y[0] = temp;
    printf("%s %s",x,y);
    return 0;
}
