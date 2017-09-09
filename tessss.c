#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000] = "My Name is khan Name My";
    char *word;
    int i,j=0,k=0,match=0;
    word = strtok(s," .,-");
    while(s!=NULL){
        if(strstr(word,s)!=NULL){
            match++;
        }
        word=strtok(NULL, " ,.-");
    }

    return 0;
}
