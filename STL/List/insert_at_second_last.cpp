#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int>l{1,2,3,4};
    cout<<"At pos 2nd last "<<endl;
    auto itt = l.end();
    advance(itt,-1);
    l.insert(itt,111);
    for(auto i:l)
    cout<<i<<endl;
}    