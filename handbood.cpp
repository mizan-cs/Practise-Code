#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
    int n=5;
    vector< pair<int, int> > student;
    for(int i=0;i<n;i++){
        student.push_back(make_pair(i,i*i));
    }

    for(int i=0;i<student.size();i++){
        cout<<student[i].first<<"  "<<student[i].second<<endl;
    }

    //Queue Data Structure.................
    cout<<"\n--------------Queue-------------\n";
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    //Priority Queues......................
    cout<<"\n------------------Priority Queues-----------";


}
