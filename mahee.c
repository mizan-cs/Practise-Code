#include <stdio.h>
#include <string.h>

int main()
{
   int t,amount,high,i,cs,j;
   char str[200];
   char ch,best_ch;
    int len;
   scanf("%d",&t);
   for(cs=1;cs<=t;cs++){
        best_ch = str[0];
        high = 1;
        amount = 0;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;str[i]!='\0';i++){
        ch = str[i];
            for(j=0; j<len; j++)
            {
            if(ch == str[j]){
                amount++;
            }
        }
        if(amount>high){
            high = amount;
//            printf("Cd true and ch == %c amount == %d\n",ch,low);
            best_ch = ch;
        }
        amount = 0;
    }
    printf("%d %c\n",high,best_ch);

   }
   return 0;
}
