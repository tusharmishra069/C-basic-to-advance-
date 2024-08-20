#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector sorting 

int main(){
  vector<int>v{1,2,2,1,7,6};
  sort(v.begin(),v.end());
  for(int i:v)
  cout<<i<<endl;
}