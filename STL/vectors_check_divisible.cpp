#include<iostream>
#include<vector>
using namespace std;

// ques create a flexiable array using vector, constraints element of the array that is divisible by 3,6,and 12 then print it;

int main(){
  int size;
  int i,j,n;
  cout<<"enter the size of vector array:- "<<endl;
  cin>>size;
  vector<int> a{size};
  cout<<"enter the array elements: "<<endl;
  for ( i = 0; i < size; i++)
  {
    cin>>n;
    a.push_back(n);
  }
  cout<<"number that is divisible by the 3,6 and 12 is : - "<<endl;
    for ( i=0;i<=size;i++){
    if (a[i]%3==0&&a[i]%6==0&&a[i]%12==0) 
    { 
     cout<<a[i]<<endl;
    }  
  } 
}