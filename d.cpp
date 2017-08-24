#include<iostream>

using namespace std;

int main()
{
    int i=10,n;

    int sum = 0;

    while(i--){
        cin>>n;
        if(n%2==0){
            sum += n;
        }else{
            sum -= n;
        }
    }


    cout<<sum<<endl;

    return 0;
}
