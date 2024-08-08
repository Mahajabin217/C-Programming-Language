#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
int jadu_matrix = 1;
    if(n == m)
    {   
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if ((i == j || i + j == n - 1) && a[i][j] != 1)
            {
                jadu_matrix = 0;
                break;
            }
            if(i!=j && i+j != n-1 && a[i][j] != 0)
            {
                jadu_matrix = 0;
                break;        
            }
        }
    }
    }
    else
    {
        jadu_matrix = 0;
    }
    if(jadu_matrix){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}