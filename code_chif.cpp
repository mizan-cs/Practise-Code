#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int ar[1000000];
    int N;
    int t;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>t;
        if(t != 0){
            ar[t-1]=1;
        }
    }

    for(int i=0;i<N;i++){
        if(!ar[i]) cout<<i+1;
    }

    cout<<endl;
}
