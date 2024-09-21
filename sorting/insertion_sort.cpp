#include<iostream>
using namespace std;

//insertion sort
void insertion_sort(int a[],int n,int &iterations){
    for(int i=1;i<n;i++){//take here i=1 becasue we assumed that the first element is already sorted
    int key = a[i];
    int j =i-1;//j = i-1 because we have to compare the key with the previous element
    while(j>=0 && a[j]>key){
        a[j+1] = a[j]; //shifting the elements
        j--;// decrementing the value of j
        iterations++;{
    }
    a[j+1] = key;
    }
}
}
int main(){
    int n;
    int iterations =0;
    cout<<"enter the length: ";
    cin>>n;
    cout<<"enter the array elements: ";
    int a[n];
    for(int i =0; i<n;i++){
        cin>>a[i];
    }

    cout<<"unsorted array: ";
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    insertion_sort(a,n,iterations);
    cout<<"sorted array: ";
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<"No. of iterations: "<<iterations;

}