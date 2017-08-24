#include<bits/stdc++.h>
using namespace std;

int BToD(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    int t;
    cin>>t;
    long long n1,n2;
    for(int i=1;i<=t;i++){
        cin>>n1>>n2;
        if(BToD(n1)>BToD(n2)){
            cout<<"Case "<<i<<": A"<<endl;
        }else if(BToD(n1)==BToD(n2)){
            cout<<"Case "<<i<<": Same"<<endl;
        }else{
            cout<<"Case "<<i<<": B"<<endl;
        }
    }
    return 0;
}
