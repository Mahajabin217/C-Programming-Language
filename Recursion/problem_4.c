// HOW TO PRINT ARRAY USING RECURSION

#include <stdio.h>
void fun(int a[], int n, int i)
{
    if (i == n) // Base case or Recursion stop
    {
        return;
    }
    printf("%d\n", a[i]);
    fun(a, n, i + 1); // Recursion control
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    fun(a, n, 0); // Function call
    return 0;
}

/*
INPUT: 5
       10 20 30 40 50
OUTPUT:10 20 30 40 50
*/