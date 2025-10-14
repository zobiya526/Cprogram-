

#include <stdio.h>

int main()
{
int n,temp,rev=0;
printf("enter number ");
scanf("%d",&n);
temp=n;
while(n){
    rev=rev*10+(n%10);
    n=n/10;
    
}
printf("%d\n",rev);
if(temp==rev)
printf("palindrome");
else
printf("not a palindrome");

    return 0;
}