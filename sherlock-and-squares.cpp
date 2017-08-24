#include<iostream>
#include<math.h>

using namespace std;

int main()
{
        int t;

        cin>>t;
        while(t--){
                long long int a,b;
                long long int ans=0;
                cin>>a>>b;

                for(long long int i=a;i<=b;i++){
                        if(sqrt(i)==floor(sqrt(i))){
                                ans++;
                        }
                }
                cout<<ans<<endl;
        }

        return 0;
}
