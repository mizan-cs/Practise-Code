#include<stdio.h>

int main()
{
        int t,temp,hight=1,i,j,n,summer;

        scanf("%d",&t);

        while(t--){
                hight=1;
                scanf("%d",&n);
                for(i=1;i<=n;i++){
                        hight=hight*2;
                        if(i+1==n){
                                break;
                        }
                        else{
                                hight=hight+1;
                        }
                }

        printf("%d\n",hight);
        }

        return 0;
}
