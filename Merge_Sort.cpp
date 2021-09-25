//191921 Pawanesh Mishra

#include <iostream>
using namespace std;

void merge(int* , int, int, int);
void Recursive_merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        //Diving into further subproblems

        mid=(low+high)/2;
        Recursive_merge_sort(arr,low,mid);
        Recursive_merge_sort(arr,mid+1,high);
        //Divide and Conquer Approach

        merge(arr,low,high,mid);
    }
}
//Implementation of Merge sort

void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}
//Merging back the results


int main()
{
    int A[30], num;

    cout<<"Enter number of elements to be sorted : ";
    cin>>num;
    cout<<"Enter the elements to be sorted : ";

    for (int i = 0; i < num; i++) cin>>A[i];

    Recursive_merge_sort(A, 0, num-1);
    //Recursively calling of Merge Sort

    for (int i = 0; i < num; i++) cout<<A[i]<<endl;
}
