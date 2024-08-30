#include<iostream>
#include<map>
using namespace std;

// functions in map

// insert()	adds an element (key-value pair) to the map

int main(){
    map<string,int>stud;
    stud["sub1"]=74;
    stud["sub2"]=78;
    stud.insert(make_pair("sub3",85));
    stud.insert(make_pair("sub4",95));
    for(auto i:stud)
    cout<<i.first<<" : "<<i.second<<endl;
}