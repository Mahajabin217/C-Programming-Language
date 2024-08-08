#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int a[], int index, int n)
{
    if(index < 0)
    {
        return;
    }
    if(index % 2 == 0)
    {
        printf("%d",a[index]);
    }
    fun(index-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    } 
    fun();
    return 0;
}
