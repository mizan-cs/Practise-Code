#include<stdio.h>
#include<string.h>
int main()
{
    int i,T,j,n,len,k;
    char count1[27];
    char count2[27];
    char s[1000];
    scanf("%d",&T);
    getchar();
    while(T--){
        gets(s);
        for(i=0;i<27;i++){
            count1[i]=0;
            count2[i]=0;
        }
        for(i=0;i<strlen(s);i++){
            if(s[i]>='a'&&s[i]<='z'){
                count1[s[i]-'a']++;
            }
        }
        for(i=0;i<strlen(s);i++){
            if(s[i]>='A'&&s[i]<='Z'){
                count2[s[i]-'A']++;
            }
        }
        for(i=0;i<26;i++){
            if(count[i]!=0){
                printf("%c = %d\n",'a'+i,count[i]);
            }
        }
    }
	return 0;
}
