#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int top = -1;
int sta[1000002];

void push(int v){
    top++;
    sta[top]=v;
}

void pop(){
    top--;
}

void print(){
    for(int i=0;i<=top;i++){
        cout<<sta[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    push(2);
    print();

    push(6);
    print();
    pop();
    print();
}
