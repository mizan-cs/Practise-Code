#include<bits/stdc++.h>
using namespace std;
int a[] = {1,2,54,5};
void do_sort()
{

    sort(a,a+4);
    for(int i=0;i<4;i++) cout<<a[i]<<" ";
}

int main()
{
    stack<int> m;
    m.push(10);
    m.push(20);
    m.push(30);

    int k;
    k=m.top();
    m.pop();
    k=m.top();
    cout<<k<<endl;
    do_sort();
}
