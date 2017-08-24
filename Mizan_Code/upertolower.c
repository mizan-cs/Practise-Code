#include<stdio.h>
#include<string.h>

int main()
{
        int t,i,c;

        char str[99];

        scanf("%d",&t);
        for(c=1;c<=t;c++){
                gets(str);
                for(i=0;i<=strlen(str);i++){
                        if(str[i]>=95){
                                str[i]=str[i]-32;
                        }
                }
                printf("Case %d: %s\n",c,str);
        }
        return 0;
}
