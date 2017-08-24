#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char *str1,*str2;
    int i,j;

    cin>>str1>>str2;

    int str_len1=strlen(str1);
    int str_len2=strlen(str2);

    for(i=0;i<(str_len1-str_len2);i++){
        if(str2[0]==str1[i]){
            for(j=1;j<str_len2;j++){
                if(str2[j]!=str1[i+j]){
                    break;
                }
            }
            if(j==str_len2){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
