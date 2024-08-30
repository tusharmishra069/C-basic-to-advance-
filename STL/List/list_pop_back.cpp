#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int>L{1,2,3};
    cout<<"og List:"<<endl;
    for(int i:L)
    cout<<i<<endl;

    L.push_back(500); //this function add the element in the last of the list
    cout<<"Push Back:"<<endl;
    for(int i:L)
    cout<<i<<endl;

    L.pop_back(); //this function delete the element in the last of the list
    cout<<"pop back:"<<endl;
    for(int i:L)
    cout<<i<<endl;
}