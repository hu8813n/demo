#include <iostream>
using namespace std;

void Merge(int *a, int low, int mid , int high){

    // We have low to mid and mid+1 to high already sorted. 

    int i, j, k, temp [high-low];
    i = low;
    j = mid+1;
    k=0;

// Merge the two parts into temp[].
while(i <= mid && j <= high ){
    if(a[i] < a[j]){
        temp[k] = a[i];
        i++;
        k++;
    }
    else {
        temp[k] = a[j];
			k++;
			j++;
    }
}
//insert remaining value into array:
if(j > high){
    while(i <= mid){
    temp[k] = a[i] ;
    i++;
    k++;
    }
}
if(i > mid){
    while(j <= high){
    temp[k] = a[j] ;
    j++;
    k++;
    }
}
// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}

void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
 
		// Merge them to get sorted output.
		Merge(a, low, mid, high);
	}
}
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	MergeSort(arr, 0, n-1);
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
    
	return 0;
}