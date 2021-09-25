//Pawanesh Mishra 191921

#include<bits/stdc++.h>
using namespace std;

void Recursive_insertion(int*, int);

int main()
{
    int n;
    cout<<"Enter the number of inputs to get : ";
    cin>>n;
    int A[n];

    cout<<"Enter the elements to sort : ";
    for(int i=0; i<n; i++) cin>>A[i];
    //getting elements to sort
    Recursive_insertion(A, n);

    for(int i=0; i<n; i++) cout<<A[i]<<endl;
    //printing results
}


void Recursive_insertion(int A[], int n)
{
    if (n <= 1) return;
    //returns if list is empty or has 1 element

    Recursive_insertion(A, n-1);
    //recursively calling the algo n-1 times

    int Last = A[n-1];
    int i = n-2;
    //starting with last element and putting at
    //its correct location

    while (i >= 0 && A[i] > Last)
    {
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = Last;
    //Done to move elements of array which are
    //greater than our key, and place it one place
    //in front of current position.
}
