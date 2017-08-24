#include<iostream>

using namespace std;

int main()
{
        int n,temp=0,vagses,ans=0;
        cin>>n;

        temp=n%10;
        vagses=n/10;



        while(vagses!=0){

               if(n%temp==0){
                ans++;
               }

                n=vagses;
         }
        cout<<ans<<endl;


         return 0;

}
