#include <stdio.h>

int main()
{
    int n,count=0,lastdigit=0,poweroflastdigit=1,sum=0;
    printf("Enter the number:   ");
    scanf("%d",&n);
    int N=n;
    int checker=N;
    while(n!=0) {
       n=n/10;
       count=count+1;
       
    }
    while(N!=0){
       lastdigit=N%10;
        for(int i=0; i<count; i++){
            poweroflastdigit=poweroflastdigit*lastdigit;
        }
        sum=sum+poweroflastdigit;
        poweroflastdigit=1;
        N=N/10;
    }
     if(checker==sum){
         printf("Armstrong number");
     }
     else
        printf("not Armstrong");
    return 0;
}