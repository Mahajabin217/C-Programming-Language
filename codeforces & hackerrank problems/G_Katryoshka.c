#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdio.h>
int main(){
long long int eye,mouth,body,murti=0;
scanf("%lld %lld %lld",&eye,&mouth,&body);
long long int minimum;
if(eye<mouth && eye<body)
{
    minimum = eye;
}     
else if(mouth<eye && mouth<body)
{
    minimum = mouth;
}    
else{
    minimum = body;
}
eye = eye - minimum;
body = body - minimum;
mouth = mouth - minimum;
murti +=  minimum;

long long int halfEye = eye/2;

if(halfEye < body)
{
    murti += halfEye;
}
else
{
    murti += body;
}
printf("%lld",murti);

return 0;
}