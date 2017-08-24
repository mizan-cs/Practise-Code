#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int>a;
    int n=10;
    for(int i=0;i<n;i++){
        a.push_back(i*i);
    }

    for(int i=0;i<(int)a.size();i++){
        printf(" %d ",a[i]);
    }
    cout<<"\n\n"<<endl;

    pair<int, int> p, q;
    p=make_pair(3,8);
    cout<<"pair p: "<<p.first<<" "<<p.second<<endl;
    q.first = p.first+1;
    q.second = 67;
    cout<<"pair q: "<<q.first<<" "<<q.second<<endl;
}
