#include<iostream>

using namespace std;

int main()
{
    int a[100000];
    int b[100000];

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=0){
            b[a[i]-1]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]!=1){
            cout<<i+1;
        }
    }
}

