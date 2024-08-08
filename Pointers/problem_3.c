// CALL BY VALUE IN POINTERS

#include <stdio.h>
void fun(int x)
{
    printf("Address of fun x - %d\n", &x);
}
int main()
{
    int x = 10;
    printf("Address of main x- %d\n", &x);
    fun(x);
    return 0;
}

/*
OUTPUT: Address of main x- 6422300
        Address of fun x - 6422272
*/