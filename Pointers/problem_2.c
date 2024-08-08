// HOW POINTER WORK FOR double DATATYPE

#include <stdio.h>
int main()
{
    double x = 100.50;
    double *p;
    p = &x;
    printf("value of p is: %lf\n", *p); // P OR X r value 
    printf("Address of p is: %lf\n", p); // p r address
    return 0;
}

/*
OUTPUT: value of p is: 100.500000
        Address of p is: 100.500000
*/