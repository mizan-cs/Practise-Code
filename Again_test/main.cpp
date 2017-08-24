#include<iostream>

using namespace std;

int main()
{
        int n,temp=0,mod=0;

        int t;
        cin>>t;

        while(t--){
        int z=0,currect_value=0,ic_value=0;
        cin>>n;

        while(n!=0){
                mod=n%10;
                temp=n/10;
                if(mod==0){
                        z++;
                }
                else if(n%mod==0){
                        currect_value++;
                }
                else{
                        ic_value++;
                }
                n=temp;
        }

        cout<<currect_value<<endl;
        }

         return 0;

}
