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
    if(arr[i] <= 10)
    {
        arr[i];
        
    } 
    
    printf("A[%d] = %d\n",arr[i]);
    }
    return 0;
}
