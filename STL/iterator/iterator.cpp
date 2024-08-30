#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

// iterator

int main(){
  vector<int>arr;
  arr = {10,20,30};
  vector<int>::iterator itr=arr.begin();
  while(itr!=arr.end()){
    cout<<*itr<<endl;
    itr++;
  }
}