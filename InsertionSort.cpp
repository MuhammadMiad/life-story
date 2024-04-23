#include<iostream>
#include<conio.h>
using namespace std;
void InsertionSort(int arr[], int n){
int i,j,temp;
for(i=1;i<n;i++){
    temp=arr[i];
    for(j=i-1;j>=0&&arr[j]>temp;j--){

            arr[j+1]=arr[j];
    }
        arr[j+1]=temp;


}


cout<<"After  Sorted  Array: ";
for( i=0;i<n;i++){
    cout<<arr[i]<< "  ";
}
cout<<endl;
}
int main(){
  int n;
   cout<<"Enter  Number of  Elements in Array."<<endl;
   cin>>n;
    int arr[n];
    cout<<"Enter the elements in Array."<<endl;
    for(int i=0;i<n;i++){
        cout<<"Array["<<i<<"]=";
        cin>>arr[i];

    }
    cout<<endl;
    cout<<"Before   Sorted   Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< "  ";

    }
    cout<<endl<<endl<<endl;
InsertionSort(arr,n);


getch();
}
