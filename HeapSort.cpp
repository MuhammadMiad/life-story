//Heap Sort  Implementation using  array.
#include <iostream>
#include<conio.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && arr[l] > arr[largest])
		largest = l;

	  if (r < n && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);

	}
}

int main()
{
    int n ;
    cout<<"Enter the number of  element in heap Sort"<<endl;
    cin>>n;
	int arr[n] ;
	cout<<"Enter  "<<n<<"  element of  Heap sort"<<endl;
	for(int i=0;i<n;i++){
        cout<<"Index["<<i<<"]=";
        cin>>arr[i];
	}


	for(int i=n/2 -1;i>=0;i--){
	heapify(arr,n,i);
}

cout << "Max  Heap  array is \n";
	for (int i = 0; i < n; ++i){
		cout << arr[i] << "  ";
}
cout<<"\n\n";

 heapSort(arr, n);

cout << "Sorted array is \n";
for (int i = 0; i < n; ++i){
		cout << arr[i] << "  ";
}

getch();
}



