

#include <stdio.h>
#include<math.h>

int main(){
    int n,l,m,val;
    printf("enter number ");
    scanf("%d",&n);
    
    for(l=2;l<=sqrt(n);l++){
        val=1;
        for(m=1;val<n;m++){
            val=val*l;
        }
        if(val==n)
        break;
    }
    m=m-1;
    if(val==n)
        printf("%d can be writen as %d power%d",n,l,m);
    else
    printf("%d cannot be written as l power m");
        
    
    

    return 0;
}