#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for( int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    } 
    int max_idx=0,min_idx=0;
    int max_val=ar[0],min_val=ar[0];
    for(int i=1; i<n; i++)
    {
        if(ar[i] > max_val){
            max_val = ar[i];
            max_idx = i;
        }
    if(ar[i] < min_val){
        min_val = ar[i];
        min_idx = i;
    }
    }
    int temp= ar[min_idx];
    ar[min_idx] = ar[max_idx];
    ar[max_idx] = temp;  
    for(int i=0; i<n; i++)
    { 
        printf("%d ",ar[i]);
    }
    return 0;
}
