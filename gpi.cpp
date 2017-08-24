#include<iostream>
using namespace std;

int main()
{
    int a[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<i;j++){
            cout<<"|GPI"<<"|";
        }
        cout<<endl;
        cout<<"---------------------------------------------";
        cout<<endl;
    }

    return 0;
}
