

#include <stdio.h>

int main()
{
int n,i=1,j;
printf("enter number ");
scanf("%d",&n);
while(i<=n){
    for(j=1;j<=10;j++){
        printf("%d*%d=%d\n",i,j,i*j);
    }
    i++;
}

    return 0;
}