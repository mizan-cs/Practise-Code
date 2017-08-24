#include<bits/stdc++.h>

using namespace std;
int main()
{
    double x,y=0;
    cin>>x;
    y=((x-1)/x)+(1/2)*pow(((x-1)/x),2)+(1/3)*pow(((x-1)/x),3);

    cout<<y;

}
