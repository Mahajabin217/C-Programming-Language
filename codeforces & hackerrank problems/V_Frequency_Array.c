#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int count[m + 1];
    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        count[num]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}
