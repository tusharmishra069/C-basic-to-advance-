#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// question find the longest unique sub string (leetcode problem)

int main(){
    string s;
    cin>>s;
    unordered_map<char,int>map;
    int l=0,start=0;
    
    for(auto i=0;i<s.length();i++){
        char c = s[i];
    
    if(map.find(c)!=map.end() && map[c]>=start){
        start = map[c]+1;
    }
    map[c]=i;
    l= max(l,i-start+1);
    }
  cout<<l;

} 