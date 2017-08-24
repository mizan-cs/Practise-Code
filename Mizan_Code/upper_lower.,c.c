#include<stdio.h>
#include<string.h>
int main()
{
        int t,i;
        char *low;
        scanf("%d",&t);
        while(t--){
                gets(low);
                strupr(low);
                printf("%s\n",low);
        }
        return 0;
}
