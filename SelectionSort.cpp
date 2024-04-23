#include<bits/stdc++.h>
#include<conio.h>
using   namespace std;
void SelectionSort(int arr[], int n)
{
    int i,j,min,temp;
    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;

        }
    }

    cout<<"After  Sorted  Array: ";
    for( i=0; i<n; i++)
    {
        cout<<arr[i]<< "  ";
    }
    cout<<endl;

}

int main()
{
    int n;
    cout<<"Enter  Number of  Elements in Array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in Array."<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Array["<<i<<"]=";
        cin>>arr[i];

    }
    cout<<endl;
    cout<<"Before   Sorted   Array :";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< "  ";

    }
    cout<<endl<<endl<<endl;
    SelectionSort(arr,n);

    getch();
}
