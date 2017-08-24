#include<stdio.h>

int main()
{
        int num,x,y,sum;
        scanf("%d",&num);

        if(num==1){
                scanf("%d",&x);
                scanf("%d",&y);
                sum=x+y;
                printf("Sum is %d",sum);
        }
        else if(num==2){
                scanf("%d",&x);
                scanf("%d",&y);
                sum=x-y;
                printf("Sum is %d",sum);
        }
        else if(num==3){
                scanf("%d",&x);
                scanf("%d",&y);
                sum=x*y;
                printf("Sum is %d",sum);
        }
        else if(num==4){
                scanf("%d",&x);
                scanf("%d",&y);
                sum=x/y;
                printf("Sum is %d",sum);
        }
        else{
                printf("Error!!\a");
        }

        return 0;
}
