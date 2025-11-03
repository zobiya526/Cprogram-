

#include <stdio.h>

int main(){
    int i,n,j,k,count;
    printf("enter number ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        count=i;
        for(j=1;j<=i;j++){
            
            printf("%d ",count--);
        }
    
        
        printf("\n");
    }

    return 0;
}