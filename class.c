#include<stdio.h>
int main()
{
    int a,b,sum,min;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum=a+b;
    min=a-b;
    printf("sum is %d\nmin is %d",sum,min);
    return 0;
}
