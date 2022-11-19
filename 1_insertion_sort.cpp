#include <iostream>
using namespace std;

void InsertionSort(int *a , int n){
    int i, j , key ;
    for( j = 1; j<n; j++){
        
        key = a[j];
        i = j - 1;
          while(i >= 0 && a[i] > key){
            a[i+1] = a[i];
            i--;
            a[i+1] = key ;

          }
    
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
 
	InsertionSort(arr, n);
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
    
	return 0;
}