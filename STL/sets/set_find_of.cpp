#include<iostream>
#include<set>
using namespace std;

// find of function

int main(){
  set<int>s{1,2,3,1,2};
  for(auto i:s)
  cout<<i<<endl;

  if(s.find(10)!=s.end())
  cout<<"yes";
  else
  cout<<"no";
}