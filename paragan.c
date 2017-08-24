#include<stdio.h>
int main()
{
        char s[1000];

        gets(s);

        while(s=='\0'){
                printf("1\t");
        }

        return 0;
}
