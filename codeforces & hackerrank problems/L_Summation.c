#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int a[], int n, int index)
{
    if(index == n) return;
    printf("%d\n",a[i]);
    fun(a,n,index+1);
    
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
    int result=sum(a,n,0);
    printf("%d",result);
    return 0;
}
