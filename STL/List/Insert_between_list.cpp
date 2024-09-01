#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int>l{1,2,3,4,5};
    cout<<"insert in between the Iterator: ";
    auto it = l.begin();
    advance(it,2);//iterator standing in the pos 2
    l.insert(it,33);
    for(auto i:l){
        cout<<i<<endl;
    }
}