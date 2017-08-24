#include<stdio.h>

int main()
{
        int i,x,y,sum,n;
        scanf("%d",&n);

        for(i=1; i<=n; i++){

                scanf("%d",&x);
                scanf("%d",&y);
                sum=x+y;
                printf("Sum number %d =%d\n",i,sum);

        }

        return 0;
}
