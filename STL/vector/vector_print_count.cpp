#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//this is vector + map concept question

// make a vecetor and the print the count of its element
// where its key is element and the value is the no of cout 


int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"enter the elements: ";
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    map<int,int>m;
    for (int i = 0; i < sizeof(n)+1; i++)
    {
    int c = count(v.begin(),v.end(),v[i]);
    m.insert(make_pair(v[i],c));
    }
    for(auto i:m)
    cout<<i.first<<" : "<<i.second<<endl;
    
}