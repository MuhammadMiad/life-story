#include<iostream>
using namespace std;
void   Merge(int arr[], int left, int right, int mid){
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=left;
    while(i<n1&&j<n2){
        if(L[i]<R[j]){
            arr[k++]=L[i++];
        }
        else{
            arr[k++]=R[j++];
        }


    }
    while(i<n1){
        arr[k++]=L[i++];
    }
    while(j<n2){
        arr[k++]=R[j++];
    }

}
void MergeSort(int arr[],int left ,int right){
if(left<right){
    int mid=(left+right)/2;
    MergeSort(arr,left,mid);
    MergeSort(arr,mid+1,right);
    Merge(arr,left,right, mid);
}

}
int main(){
int n,i;
cout<<"Enter   the number  of  elements  in Quick Sort Array ."<<endl;
cin>>n;
int arr[n];
cout<<"Enter  Elements  of  Quick Sort Array."<<endl;
for(i=0;i<n;i++){
    cout<<"Array["<<i<<"]=";
    cin>>arr[i];
}

cout<<"Before  Sorted Quick Sort.";
for(i=0;i<n;i++){
    cout<<arr[i]<< "  ";
}
cout<<endl;

MergeSort(arr,0,n-1);

cout<<"After  Sorted  Quick  Sort."<<endl;
for(i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
cout<<endl;
return 0;
}
