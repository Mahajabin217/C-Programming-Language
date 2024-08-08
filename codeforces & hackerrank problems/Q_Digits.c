//count me 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int div_2=0;
    int div_3=0;
    int a[n];   
    for(int i=0; i<n; i++)
    { 
        scanf("%d",&a[i]);
        if(a[i]%2 == 0)
        {
           div_2++; 
        }
        else if(a[i]%3 == 0)
        {
            div_3++;
        }
    }
    printf("%d %d",div_2,div_3);
    return 0;
}

//count me 2
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch[100001];
    scanf("%s",ch);
    int consonant=0;
    for(int i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' &&  ch[i]!='u')
        {
            consonant++;
        } 
    }
    printf("%d",consonant);
    return 0;
}

//count me 3
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test;
    scanf("%d",&test);
    while(test--)
    {
        char c[10001];
        scanf("%s",c);
        int capital_alphabet=0;
        int small_alphabet=0;
        int digit=0;
        for(int i=0; c[i]!='\0'; i++)
        {
            if(c[i] >='A' && c[i] <='Z')
            {
                capital_alphabet++;
            }
            else if(c[i] >='a' && c[i] <='z')
            {
                small_alphabet++;
            }
            else if(c[i] >='0' && c[i] <='9')
            {
                digit++;
            }
        }
    printf("%d %d %d\n",capital_alphabet,small_alphabet,digit);
    }
    return 0;
}

//count me 4
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[10001];
    scanf("%s",s);
    int cnt[26]={0};
    for(int i=0; i<strlen(s); i++)
    {
        int value=s[i]-'a';
        cnt[value]++;
    }
    for(int i=0; i<26; i++)
    {
        if(cnt[i]!=0)
        {
            printf("%c - %d\n",i+'a',cnt[i]);
        }
     }
    return 0;
}
//do it
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,K;
    scanf("%d %d",&N,&K);
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=K; j++)
    {
        printf("%d ",j);
    }
      printf("\n");  
    }
   
    return 0;
}

//tell me
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int t;
     scanf("%d",&t);
     while(t--)
     {
         int n;
         scanf("%d",&n);
         int a[n];
         for(int i=0; i<n; i++)
         {
              scanf("%d",&a[i]);
         }  
         int count=0;
         int x;
         scanf("%d",&x);
         
         for(int i=0; i<n; i++)
         {
             if(a[i]==x){
                 count++;                   
             }            
         }
         if(count)
         {
             printf("YES\n");
         }
         else{
             printf("NO\n");
         }
         
     }
    return 0;
}

//farmers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    while(t--){
        int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);
        int W=D*M1;
        int Z=W/(M1+M2);
        int Day_diff=D-Z;
        printf("%d\n",Day_diff);
        
    }
    return 0;
}

