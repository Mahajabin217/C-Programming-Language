// HOW POINTER WORK FOR int DATATYPE

#include <stdio.h>
int main()
{
    int x = 100;
    int *p;
    p = &x;
    printf("value of p is: %d\n", *p); // P OR X r value 
    printf("Address of p is: %d\n", p); // p r address
    return 0;
}

/*
OUTPUT: value of  p is: 100
        Address of p is: 6422296
*/