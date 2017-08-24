#include<stdio.h>
int main()
{
        int year;
        scanf("%d",&year);

        if(year%400==0){
                printf("Lear Year");
        }
        else if(year%100==0){
                printf("Not");
        }
        else if(year%4==0){
                printf("Lear Year");
        }
        else{
                printf("Not");
        }
        return 0;
}
