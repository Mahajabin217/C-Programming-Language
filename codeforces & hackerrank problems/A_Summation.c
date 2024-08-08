#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    long long  int n;
    scanf("%lld",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);        
    }
    long long int sum=0;
    long long int neg;
    for(int i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
        if(sum < 0)
        {
           printf("%lld", sum * -1);
        }
        else{
        printf("%lld",sum); 
        }       
    return 0;
}
