#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[100001];
        scanf("%s",a);
        int tiger = 0;
        int pathaan = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 'P'){
                pathaan++;
            }
            else if(a[i] == 'T'){
                tiger++;
            }
        }
        if(tiger > pathaan){
            printf("Tiger\n");
        }
        else if(pathaan > tiger){
            printf("Pathaan\n");
        }
        else{
            printf("Draw\n");
        }
    } 
    return 0;
}
