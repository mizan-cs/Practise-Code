#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,d1,d2;
    cin>>t;
    int a1,a2,a3,n,nth=0;
    for(int i=1;i<=t;i++){
        cin>>a1>>a2>>a3>>n;
        d1=a2-a1;
        d2=a3-a2;
        if(d1==d2){
            while(a1<n){
                nth=nth+d1;
                cout<<nth<<endl;
                a1=a1+d1;
            }
        }
    }
    return 0;
}
