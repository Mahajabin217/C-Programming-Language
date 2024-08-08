// HOW TO TAKE INPUT & PRINT OUTPUT OF AN ARRAY

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int ar[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ar[i]);
    }
    
    return 0;
}

// INPUT: 10 20 30 40 50 
/* OUTPUT:10 
          20
          30
          40
          50    */
