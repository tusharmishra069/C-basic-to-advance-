#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// vector erase

int main(){
  vector<int>v{1,2,2,1,7,6};
  cout<<v[0]<<endl;
  cout<<"after erase: "<<endl;
  v.erase(v.begin());
  cout<<v[0];
}
