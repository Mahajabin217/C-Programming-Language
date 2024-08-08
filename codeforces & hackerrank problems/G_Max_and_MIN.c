#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void num(int a[], int n, int *min, int *max)
{
    *min=a[0];
    *max=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i] < *min){
            *min=a[i];
        }
        if(a[i] > *max){
            *max=a[i];
        }
    }
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
    int min,max;
    num(a,n,&min,&max);
    printf("%d %d ",min,max);
    return 0;
}
