#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// finding the element in the vector by using the find() of fucntion

int main() {
    vector<int> arr{20,10,5,7};
    int s;
    cout<<"Which ele u want to search: ";
    cin>>s;
    if (find(arr.begin(),arr.end(),s)!=arr.end())//fin()
    cout<<"yes";
    else
    cout<<"no";
    
    return 0;
}