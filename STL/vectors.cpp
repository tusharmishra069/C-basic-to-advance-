#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// STL [standard template library]

// its a library contains lots of tools which helps the programmer to implement algorithms and data structure

// components-

// 1.containers
// 2.iterator
// 3.algorithm


// Vector
// -its from container mainly use for arrays, biggest advantage is creation of dynamic array 

// note:- size of array can be flexable in terms of run time 

int  main(){
    vector<int> a{2,3,4,5};//integer vector array


    cout<<"======integer========"<<endl;
    for(int i:a){
        cout<<i<<endl;
    }


    cout<<"=======double======="<<endl;


    vector<double>d;
    d={1.2,8.5,4.5,7.4,4.1};//double vector array
    cout<<d[2]<<endl;

    cout<<"=========char========"<<endl;


    vector<char>c{'a','b','c'};//char vector array
    for(char i:c){
        cout<<i<<endl;
    }

    cout<<"=======string======"<<endl;


    vector<string>s{"hello","world","wp","ggwp"};//string vector array
    for(string i:s){
        cout<<i<<endl;
    }
    cout<<"=============="<<endl;


    cout<<"size: "<<d.size()<<endl;//checking the size of double 
    cout<<"capacity: "<<d.capacity()<<endl;//checking the capacity


    cout<<"=============="<<endl;
    // inserting elememt
    cout<<"inserting element in th double array: "<<endl;
    d.push_back(100);
    for(double j:d){
        cout<<j<<endl;
    }

    cout<<"=============="<<endl;


    cout<<"size: "<<d.size()<<endl;
    cout<<"capacity: "<<d.capacity()<<endl;


    cout<<"=============="<<endl;

// insert fuction insert the element in the array
    d.insert(d.begin(),500);//begin is the fuction that insert the element in the beginning
    cout<<d[0]<<endl;


    cout<<"=============="<<endl;


    d.insert(d.begin()+2,2.56);//with the + operator it insert the element in the between of array element(0+n)
    cout<<d[2]<<endl;

    cout<<"=============="<<endl;


    d.insert(d.end(),90.0);
    for(double k:d){
        cout<<"d: "<<k<<endl;
    }

    
    cout<<"=============="<<endl;
    d.insert(d.end()-2,60.5);
    for(double k:d){
        cout<<"d: "<<k<<endl;
    }


}