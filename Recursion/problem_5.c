// HOW TO LENGTH OF A STRING USING RECURSION

#include <stdio.h>
int fun(char a[], int i)
{
    if (a[i] == '\0') // Base case or Recursion stop
    {
        return 0;
    }
    int l = fun(a, i + 1); // Recursion control
    return l + 1;
}
int main()
{
    char a[6] = "Hello";
    int length = fun(a, 0); // Function call 
    printf("%d\n", length);
    return 0;
}

// OUTPUT: 5