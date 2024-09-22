#include<iostream>
using namespace std;

int iteration = 0; //for counting the number of iterations


void merge(int a[],int l, int mid, int r){//basically l and r the left and right index of the array and mid is the middle index of the array
    int n1 = mid-l+1;  //define th size of left partr of the array
    int n2 = r-mid; // define the size of right part of the array

    //temp arrays

    int p[n1], q[n2];

    //copy data to temp arrays p[] and q[]

    for (int i = 0; i < n1; i++)   
    {
        p[i]=a[l+i]; //copy the left part of the array to p[]
    }

    for(int i=0; i<n2; i++){
        q[i]=a[mid+1+i]; //copy the right part of the array to q[]
    }

    int i=0, j=0, k=l;  //i pointer for p , j pointer for q and k pointer for the main array

// below loop campare karega p and q ke elements ko and jo chota hoga usko a[] me dal dega
    while(i < n1 && j < n2){
        if(p[i] <= q[j]){
            a[k]=p[i];
            i++;
        }
        else{
            a[k]=q[j];
            j++;
        }
        k++;
        iteration++;
    }
    
    // ye extra hai q ki agar kise ek array me elements bach jate hai to ye loop usko a[] me dal dega
    // like size p me element ho extra to
    while(i < n1){
        a[k]=p[i];
        i++;
        k++;
        iteration++;
    }
// ye q me element ho extra to
    while(j < n2){
        a[k]=q[j];
        j++;
        k++;
        iteration++;
    }
}

//merge sort function
void mergeSort(int a[], int l, int r){
    if(l<r){ // if left index is less than right index then only we can sort the array
        int mid = (l+r)/2; //find the middle index of the array and divide the array into two parts
        mergeSort(a,l,mid); //sort the left part of the array
        mergeSort(a,mid+1,r);// sort the right part of the array
        merge(a,l,mid,r); //merge the sorted left and right part of the array
    }
}
    

int main()
{
    int l;
    cout<<"enter the length : ";
    cin>>l;
    int a[l];
    cout<<"enter the elements : ";
    for(int i=0; i<l; i++){
        cin>>a[i];
    }

    cout<<"unsorted array : ";
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    mergeSort(a,0,l-1);
    cout<<"sorted array : ";
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout << "Number of iterations: " << iteration ;
}