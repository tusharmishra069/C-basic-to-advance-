#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// question after creating integer vector from the user sort the vector and remove all the duplicate 

int main(){
  int size;
  cout<<"enter the size of vector array: "; 
  cin>>size;
  vector<int>a(size);
  cout<<"enter the vector element: "<<endl;
  for(int i = 0; i<size;i++){
    cin>>a[i];
  }
  // sorting
  sort(a.begin(),a.end());
  cout<<"after sorted:"<<endl;
  for(int i:a)
  cout<<i<<endl;

  // duplicate
  cout<<"after deleting the duplicate value: "<<endl;
  int i=0;
  while (i<=a.size())
  {
    if(i+1>=a.size()){
      break;
    }
    if(a[i]==a[i+1]){
      a.erase(a.begin()+(i+1));
    }
    else{
      i++;
    }
  }
  for(int i =0;i<a.size();i++){
    cout<<a[i]<<endl;
  }
  
}