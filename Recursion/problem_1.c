// HOW TO PRINT FROM 1 TO 5 USING RECURSION

#include <stdio.h>
void fun(int i)
{
    if (i == 6) // Base case or Recursion stop
    {
        return;
    }
    printf("%d\n", i);
    fun(i + 1); // Recursion control
}
int main()
{
    fun(1); // Function call
    return 0;
}

/*
OUTPUT: 1
        2
        3
        4
        5
*/