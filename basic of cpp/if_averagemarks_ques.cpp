#include<iostream>
using namespace std;
//ques  get 5 subject marks asa input and calculate total and the average marks and print great work if the average marks is greter than
// 80 and rest print the good work

int main(){
    float s1,s2,s3,s4,s5,total, percentage;
    cout<<"enter the marks of subject :- ";
    cin>>s1>>s2>>s3>>s4>>s5;
    total=s1+s2+s3+s4+s5;
    percentage = ((s1+s2+s3+s4+s5)/100.0)*100.0;
    if(percentage >= 80 ){
        cout<<"great work";
    }
    else{
        cout<<"good work";
    }
}