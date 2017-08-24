#include<stdio.h>
int main()
{
        int x,i,a,b,c,sum;
        scanf("%d",&x);

        for(i=1;i<=x;i++){
                scanf("%d %d %d",&a,&b,&c);
                sum=a*b*c;
                printf("%d\n",sum);
        }

        return 0;
}
