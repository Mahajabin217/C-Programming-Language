// HOW TO PRINT FROM 5 TO 1 USING RECURSION IN REVERSE WAY

#include <stdio.h>
void fun(int i)
{
    if (i == 6) // Base case or Recursion stop
    {
        return;
    }
    fun(i + 1); // Recursion control
    printf("%d\n", i);
}
int main()
{
    fun(1); // Function call
    return 0;
}

/*
OUTPUT: 5
        4
        3
        2
        1
*/