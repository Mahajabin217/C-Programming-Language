#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int T;
    int tmp;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        int a[N];
        for(int i=0; i<N; i++)
        {
            scanf("%d ",&a[i]);
        }
        int b[1001], c[1001];
        for(int i=0; i<N; i++)
        {
            b[i] = a[i];
        }
        for(int i=0; i<N; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                if(b[i] > b[j])
                {
                    tmp=b[i];
                    b[i]=b[j];
                    b[j]=tmp;
                }
            }
        }
        for(int i=0; i<N; i++)
        {
            c[i] = a[i] - b[i];
        }
        for(int i=0; i<N; i++)
        {
            printf("%d ",abs(c[i]));
        }
        printf("\n");
    } 
    return 0;
}
