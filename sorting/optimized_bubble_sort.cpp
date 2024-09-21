#include<iostream>
using namespace std;


void bubble_sort(int a[],int n,int &iterations){
    bool swapped;
    int i=0;
    do{
        swapped = false;
        for(int j=0;j<n-1-i;j++){ //n-1-i emsure that the last element is already sorted and not check it again
            if(a[j]>a[j+1]){ //comparing
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped =true;
            }
        }
        i++;
        iterations++;//increment the no. of iterations , then we know how many iterations it took to sort the array
    }while(swapped);
}

void bubble_sort_desceding_order(int a[],int n){
    bool swapped;
    int i=0;
    do{
        swapped = false;
        for(int j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped =true;
            }
        }
        i++;
    }while(swapped);
}

int main(){
    int n ;
    int iterations = 0;
    cout<<"enter the no. of elements in the array"<<endl;
    cin>>n;
    cout<<"enter the array elements"<<endl;
    int a[n];
    for(int i =0; i<n;i++){
        cin>>a[i];
    }
    cout<<"unsorted array: ";
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bubble_sort(a,n,iterations);
    cout<<"sorted array: ";
    for(int i =0; i<n;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;

    bubble_sort_desceding_order(a,n);
    cout<<"In decending order: ";
    for(int i =0; i<n;i++){
    cout<<a[i]<<" ";
    }

    cout<<endl;
    cout<<"no. of iterations: "<<iterations<<endl;

}
