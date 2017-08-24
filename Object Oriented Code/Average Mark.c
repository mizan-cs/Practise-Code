#include<stdio.h>

int main()
{
    int total,marks,avr,i,j,n,t;

    scanf("%d",&t);

    for(i=0;i<t;i++){
        n=0;
        j=0;
        scanf("%d",&n);
        total=0;
        for(j=0;j<n;j++){
            scanf("%d",&marks);
            total=total+marks;
        }
        avr=total/n;
        printf("Case %d: %d\n",i+1,avr);

    }
    return 0;
}
