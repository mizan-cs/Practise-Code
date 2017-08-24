#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[10000];
    int t,c,sum;
    cin>>t;

    for(int i=1;i<=t;i++){
        sum=0;
        cin>>c;
        for(int j=0;j<c;j++){
            cin>>a[j];
            sum = sum+a[j];
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }

    return 0;
}
