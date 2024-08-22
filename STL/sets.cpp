#include<iostream>
#include<set>
using namespace std;

// sets:- it is other stl function that take only uni value 

int main(){
  set<int>s{1,2,3,1,2};
  for(auto i:s)
  cout<<i<<endl;
}