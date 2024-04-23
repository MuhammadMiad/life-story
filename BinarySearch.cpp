#include<iostream>
using namespace std;

void   BinarySearch(int  arr[], int l, int n){
    int r=n-1;
    int value,i=0,position=-1;
    cout<<"Enter Searching   value"<<endl;
    cin>>value;
    while(i<n){
             int mid=(l+r)/2;

         if( arr[mid]==value){
       position=mid;
         break;
         }
         else if (arr[mid]<value){
            l=mid+1;
         }
         else {
            r=mid-1;
         }
          i++;
    }
    if(position==-1)
        cout<<"Not  Found  Value."<<endl;
    else
        cout<<value<<" Value  Found  at  index: "<<position<<endl;


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
    cout<<"Array =";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< "  ";

    }
    cout<<endl;
  BinarySearch(arr,0,n);



return 0;
}
