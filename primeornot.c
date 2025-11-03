

#include <stdio.h>
#include<math.h>

int main(){
    int n,i,count=0;
    printf("enter number ");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            break;
        }
        
    }
    if(count==0)
    printf("is prime");
    else
    printf("not prime ");

    return 0;
}