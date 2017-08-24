#include<stdio.h>


int main()
{
    int t,i,j;
    scanf("%d",&t);
    int s,n;
    for(i=1;i<=t;i++){
        s=0;
        scanf("%d",&n);
        for(j=1;j<n;j++){
            if(n%j==0){
                s=s+j;
            }
        }
        if(s==n){
            printf("YES, %d is a perfect number!\n",n);
        }else{
            printf("NO, %d is not a perfect number!\n",n);
        }
    }
    return 0;
}
