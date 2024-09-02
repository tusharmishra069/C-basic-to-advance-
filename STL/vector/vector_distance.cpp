#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int>arr{5,1,8,2,9,3,9};
    int n;
    cout<<"what u want to search: ";
    cin>>n;
    auto it=find(arr.begin(),arr.end(),n);
    if(it!=arr.end()){
    cout<<"present ";
    cout<<"at index:"<<distance(arr.begin(),it);//distance function use to identitfy the index value
    }
    else
    cout<<"not present";
    
    
       return 0;
}