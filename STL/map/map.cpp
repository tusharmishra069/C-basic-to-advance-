#include<iostream>
#include<map>
#include<bits\stdc++.h>//this header file include all the header file related to stl
using namespace std;
// stl maps 

int main(){
    map<int,string>m;//initializing the map
    m[1]="one";
    m[2]="two";
    m[3]="three";
    // using first and  second , first is key and the second is the value
    for(auto i:m){
        cout<<i.first<<endl;
        cout<<i.second<<endl;
    }
}

