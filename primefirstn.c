

#include <stdio.h>
#include<math.h>

int main(){
    int n,i,count,j,pc=0;
    printf("enter number ");
    scanf("%d",&n);
    for(j=2;pc!=n;j++){
        
    count=0;
    for(i=2;i<=sqrt(j);i++){
        if(j%i==0){
            count++;
            break;
        }
    }
        if(count==0){
        printf("%d ",j);
        pc++;}
        
    }
    

    return 0;
}