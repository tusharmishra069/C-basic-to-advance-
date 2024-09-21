#include<iostream>
using namespace std;


void selection_sort(int a[], int n, int &iteratins){
    for (int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for (int j =i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index = j;
            }
        }
    if (min_index !=i){
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    iteratins++;
    }
}
int main(){
    int n ;
    cout<<"enter the length: ";
    cin>>n;
    cout<<"enter the array elements: ";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"unsorted array: ";
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int iterations = 0;
    selection_sort(a,n,iterations);\
    
    cout<<"sorted array: ";
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }


    cout<<endl<<"No. of iterations: "<<iterations;
}