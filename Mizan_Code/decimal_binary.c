#include<stdio.h>

int main()
{
        int dec,temp=0;
        scanf("%d",&dec);

        printf("Binary value of %d is : ",dec);
        while(dec>=1){
                temp=dec/2;
                printf("%d",dec%2);
                dec=temp;
        }

        return 0;
}
