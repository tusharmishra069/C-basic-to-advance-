// get two interger no. as input from the user and design a basic calculator
#include<iostream>
using namespace std;
int main(){
  int num1;
  int num2;

  cout<<"enter the first no.  :-";
  cin>>num1;
  cout<<"enter the second no. :-";
  cin>>num2;
 
   int sum = num1 + num2 ;
   int differance =  num1 - num2;
   float prouduct = num1*num2;
   float division = num1/num2;

   cout<<sum<<endl<<differance<<endl<<prouduct<<endl<<division;
}
