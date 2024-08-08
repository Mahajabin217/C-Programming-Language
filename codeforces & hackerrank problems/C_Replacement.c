#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    } 
    for(int i=0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            arr[i]= 1;
        }
        else if(arr[i] == 0)
        {
            arr[i]= 0;
        }
        else
        {
            arr[i]= 2;
        }
            printf("%d ",arr[i]);
        }
    return 0;
}
