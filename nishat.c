#include<stdio.h>
int main()
{
    double sum=0,n,c=0;
    while(1){
        scanf("%lf",&n);
        if(n==-3) break;
        sum+=n;
        c++;
    }
    printf("%.02lf\n",sum/c);
    return 0;
}
