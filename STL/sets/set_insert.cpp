#include<iostream>
#include<set>
using namespace std;

// insert function  with sets

int main(){
  set<int>s{1,2,3,1,2};
  s.insert(500);
  for(auto i:s)
  cout<<i<<endl;
}
