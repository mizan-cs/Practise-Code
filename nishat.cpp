#include<bits/stdc++.h>
using namespace std;

int main()
{
    double avg=0,sum=0,n,c=0;


    while(1){
        cin>>n;
        if(n==-3){
            break;
        }
        sum+=n;
        c++;
    }
    cout<<sum/c<<endl;

    return 0;
}
