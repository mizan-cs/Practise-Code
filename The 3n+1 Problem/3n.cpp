#include <iostream>

using namespace std;

int main()
{
    int i,j,s=0;

    cin>>i>>j;

    if (j==1){
        cout<<i<<j<<endl;
    }
    else{
        while(j!=1){
                if(j%2!=0){
                        j=(3*j)+1;
                        s++;
                }
                else{
                        j=j/2;
                        s++;
                }
        }
    }

    cout<<i<<" "<<j<<" "<<s<<endl;
    return 0;
}
