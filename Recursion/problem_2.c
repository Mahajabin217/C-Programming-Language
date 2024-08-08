// HOW TO PRINT FROM 5 TO 1 USING RECURSION

#include <stdio.h>
void fun(int i)
{
    if (i == 0) // Base case or Recursion stop
    {
        return;
    }
    printf("%d\n", i);
    fun(i - 1); // Recursion control
}
int main()
{
    fun(5); // Function call
    return 0;
}

/*
OUTPUT: 5
        4
        3
        2
        1
*/