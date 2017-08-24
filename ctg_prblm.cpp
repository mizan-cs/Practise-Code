#include<bits/stdc++.h>

using namespace std;

void binary(int num)
{
    int rem;

    if(num <= 1){
        if(num == 0){
            cout<<"#";
        }else{
            cout<<"*";
        }
        return;
    }

    rem = num%2;
    binary(num/2);
    if(rem == 0){
            cout<<"#";
        }else{
            cout<<"*";
        }
}

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        binary(n);
        cout<<endl;
    }

}
