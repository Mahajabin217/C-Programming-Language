// CALL BY REFERENCE IN POINTERS

#include <stdio.h>
void fun(int *p)
{
    printf("Address of main x - %d\n", *p);
}
int main()
{
    int x = 10;
    printf("Address of x- %d\n", &x);
    fun(x);
    return 0;
}

/*
OUTPUT: Address of main x- 6422300
        Address of fun x - 6422272
*/

// bhul ase 
