#include<stdio.h>
#include<string.h>
int check(char a[], char b[])
{
    int i;
    int lena=strlen(a),lenb=strlen(b);
    if (lena!=lenb) return 0;
    for( i=0;i<lena;i++)
        if(a[i]!=b[i]) return 0;
        return 1;
}
int main()
{
    int n,T,i,j,count,count2=0,num,k=0;
    char s[10000],temp[10000],cheak[10000];
    char s2[10000];
    scanf("%d",&T);
    getchar();
    while(T--){
        count=1;
        count2=0;
        gets(s);
        for(i=0;s[i]!='\0';i++){
            if(s[i]==' '){
                count++;
            }
        }




       printf("words number: %d\nDuplicates words number: %d\n\n",count,count2);
    }
    return 0;
}

