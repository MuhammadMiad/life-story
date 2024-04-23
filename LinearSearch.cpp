#include<iostream>
using namespace std;
void  Search(int  arr[], int n){
    int value,position=-1;
    cout<<"Enter  Search Value:"<<endl;
    cin>>value;

for(int i=0;i<n;i++){
        if(arr[i]==value){
        position=i;
            break;
        }
}
if(position==-1)
cout<<"Not Found  Value"<<endl;
else
    cout<<" Find Value  at index:"<<position<<endl;
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
  Search(arr,n);

return 0;
}
