#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    vector<int> p;
    int k,max_n,amount,c_n;
    cin>>t;
    while(t--){
        cin>>n;
        amount = 1;
        max_n = 0;
        for(int i=0;i<n;i++){
            cin>>k;
            p.push_back(k);
        }

        for(int i=0;i<p.size();p++){
            c_n = p[i];
            for(int j=0;j<p.size();j++){
                if(p[j]==c_n){
                    amount++;
                }
            }
            if(amount>max_n){
                max_n = amount;
            }
        }
        if(max_n == 1){
            cout<<
        }
    }
}
