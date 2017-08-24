#include<bits/stdc++.h>
using namespace std;

int main(){
        int a,b;
        cin>>a>>b;
        int ans=a;
        int div,mod;
        cout<<"Out of loop a="<<a<<" b="<<b<<" ans="<<ans<<endl;
        cout<<"Into Loop"<<endl 3;
        while(a>=b){
                div=a/b;
                mod=a%b;
                ans+=div;
                a=div+mod;
                cout<<"a="<<a<<" b="<<b<<" div="<<div<<" mod="<<mod<<" ans="<<ans<<endl;
        }
        return 0;
}
