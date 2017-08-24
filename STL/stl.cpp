#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> st;
    for(int i=0;i<5;i++){
        st.push_back(make_pair(i,i*i));
    }

    for(int i=0;i<5;i++){
        cout<<st[i].first<<"  "<<st[i].second<<endl;
    }

    st.clear();

    //--------------------
    cout<<"-----------------------------\n";
    stack<int> s;
    for(int i=0;i<5;i++){
        s.push(i*i);
    }

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    //--------------------------
    cout<<"------------------------------------\n";
    queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i*i);
    }

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    //--------------------------------
    cout<<"-----------------pq----------------------\n";
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(2);

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}
