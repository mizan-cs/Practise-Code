#include<stdio.h>
int main()
{
    int student[50],i,sum=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&student[i]);
    }
    for(i=0; i<10; i++)
    {
        sum = sum+student[i];
    }
    printf("%d\n",sum);
    return 0;
}
