#include<iostream>
#include<vector>
using namespace std;

// emplace_back

int main(){
  vector<int>arr{1,2,5,2};
  arr.emplace_back(200);
  for(auto i:arr)//auto :- its detect datatype by hits own 
  cout<<i<<endl;
}