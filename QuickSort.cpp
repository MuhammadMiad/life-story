#include<iostream>
using namespace std;
int Partition(int arr[],int left,int right);

void QuickSort(int arr[],int left, int right){
 if(left<right){
    int store=Partition(arr,left,right);
    QuickSort(arr,left,store-1);
    QuickSort(arr,store+1,left);
 }
}
int  Partition(int arr[],int left, int right){
int pivot=arr[left];
int i=left;
int j=right;
while(i<j){
    while (arr[j]>pivot){
            j--;

    }
    swap(arr[j],pivot);
    while(arr[i]<pivot){
        i++;
    }
    swap(arr[i],pivot);
}
return j;

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

QuickSort(arr,0,n-1);

cout<<"After  Sorted  Quick  Sort."<<endl;
for(i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
cout<<endl;
return 0;
}
