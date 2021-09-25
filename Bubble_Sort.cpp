//191921 Pawanesh Mishra

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
	if (n == 1) return;
	//Return if only 1 element

	for (int i=0; i<n-1; i++)
		if (arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);
    //Here, every pass moves the heaviest
    //element to the last


	bubbleSort(arr, n-1);
	//Recursive calling of bubble sort
}
//Bubble Sort Function

int main()
{
	int n;
	cout<<"Enter the number of elements to sort : ";
	cin>>n;

	int A[n];
	cout<<"Enter the elements to sort : ";

	for(int i=0; i<n; i++) cin>>A[i];
	//Getting inputs

	bubbleSort(A, n);

	for(int i=0; i<n; i++) cout<<A[i]<<endl;
	return 0;
}
