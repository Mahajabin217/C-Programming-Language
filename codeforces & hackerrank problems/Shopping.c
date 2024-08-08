#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 1000)
    {
    printf("I will buy Punjabi\n");
    tk -= 1000;
        if(tk >= 500){
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
        else{
        printf("Bad luck!");
        } 
    }
    else{
        printf("Bad luck!");
    }
    return 0;
}