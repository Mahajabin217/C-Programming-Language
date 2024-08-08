#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    for(int i=0; i<t; i++)
    {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int A = m/(a*b*c);
        if(a * b * c * A ==  m)
        {
            printf("%lld\n",A); 
        }
        else
        {
            printf("-1\n");
        } 
        
    }
    return 0;
}
