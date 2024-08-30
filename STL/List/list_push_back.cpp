#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int>l{1,2,3};
    cout<<"og list"<<endl;
    for(int i:l){
        cout<<i<<endl;
    }
    //inserting using push_bach()  , its insert in the last of the list

    l.push_back(100);
    cout<<"after push_back"<<endl;
    for(int i:l){
        cout<<i<<endl;
    }
}