#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int>l{1,2,3};
    cout<<"og list"<<endl;
    for(int i:l)
    cout<<i<<endl;

    //deleting the element from the front
    l.push_front(200); //this function add the element in the starting of the list
    cout<<"Push front:"<<endl;
    for(int i:l)
    cout<<i<<endl;

 // deleting the element form list
    l.pop_front(); //this function delete the element in the starting of the list
    cout<<"pop front:"<<endl;
    for(int i:l)
    cout<<i<<endl;
}