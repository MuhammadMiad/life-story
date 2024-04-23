#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n){

int i,j;
for(i=0;i<n-1;i++){
        int flag=0;
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=1;
        }

    }

if(flag==0)
    break;
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
    BubbleSort(arr,n);



return 0;
}
