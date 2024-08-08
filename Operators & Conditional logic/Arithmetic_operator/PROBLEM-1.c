// BY USING ARITHMETIC OPERATORS,WE'LL DO THE FOLLOWING CALCULATIONS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    a = 30, b = 10;
    
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;

    printf("The sum is: %d\n", sum);
    printf("The sub is: %d\n", sub);
    printf("The mul is: %d\n", mul);
    printf("The div is: %d\n", div);

    return 0;
}

/* OUTPUT: The sum is: 40
           The sub is: 20
           The mul is: 300
           The div is: 3 */