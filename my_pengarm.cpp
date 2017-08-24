#include<iostream>
#include<string.h>
using namespace std;

int main(){
        string s;

        getline(cin,s);

        int big[26];
        int small[26];
        for(int i =0;i<26;i++){
                big[i]=0;
                small[i]=0;
        }
        for(int i=0; i<s.length(); i++){
                if(s[i] >= 'a' || s[i]<='z'){
                        small[s[i]-'a']=1;
                }

                else if(s[i]>='A' || s[i]<='Z'){
                        big[s[i]-'A']=1;
                }
        }

        for(int i=0;i<26;i++){
                cout<<small[i];
        }
        cout<<endl;
        for(int i=0;i<26;i++){
                cout<<big[i];
        }



        return 0;
}
