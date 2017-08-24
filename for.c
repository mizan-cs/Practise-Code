#include<stdio.h>

int main()
{
        int a,b,sum,i,t;
        scanf("%d",&t);
        for(i=0;i<t;i++){
                sum=0;
                scanf("%d %d",&a,&b);
                sum=a+b;
                printf("Ans.. %d: %d\n",i+1,sum);
        }



        return 0;
}
