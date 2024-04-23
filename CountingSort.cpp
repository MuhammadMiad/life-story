#include<iostream>
#include<conio.h>
using  namespace std;
void  CountingSort(int arr[], int n, int m){
 int i;
 int output[n];
 int count[m];
for(i=0;i<m ;i++)
{
    count[i]=0;
}

 for(i=0;i<n;i++){
  count[arr[i]]++;

 }
 for(i=1;i<=m;i++){
    count[i]+=count[i-1];
 }
 for(i=n-1;i>=0;i--){
    output[--count[arr[i]]]=arr[i];
 }
 cout<<"After  Sorted  Array: ";
    for( i=0; i<n; i++)
    {
        cout<<output[i]<< "  ";
    }
    cout<<endl;



}
int main(){

 int n,i;
    cout<<"Enter  Number of  Elements in Array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in Array."<<endl;
    for( i=0; i<n; i++)
    {
        cout<<"Array["<<i<<"]=";
        cin>>arr[i];

    }
    cout<<endl;
    cout<<"Before   Sorted   Array :";
    for( i=0; i<n; i++)
    {
        cout<<arr[i]<< "  ";

    }
    cout<<endl<<endl<<endl;

   int mx=arr[0];//Special Looked
   for( i=0;i<n;i++){
        if(mx <arr[i]){
          mx=arr[i];
     }
   }
    //cout<<"Maximum Value:"<<mx<<endl;

    CountingSort(arr,n,mx);
getch();
}
