#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    char a[n];
    scanf("%s", a);
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] - '0';
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}
