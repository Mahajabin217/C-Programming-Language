

#include<stdio.h>
int main ()
{
char a;
scanf("%c",&a);
if(a>='a' && a<='z')
{
char sum =a+1;
printf("%c\n",sum);
}
return 0;
}