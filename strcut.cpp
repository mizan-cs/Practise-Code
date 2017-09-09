#include<bits/stdc++.h>
using namespace std;

struct mizan
{
    int a;
    int b;
    int c;
};

mizan newMizan(int x,int y, int z)
{
     mizan m;
     m.a = x;
     m.b = y;
     m.c = z;

     return m;
}

int main()
{
     mizan h;
     h = newMizan(10,20,30);
     cout<<h.a<<endl;
     cout<<h.b<<endl;
     cout<<h.c<<endl;

     return 0;
}
