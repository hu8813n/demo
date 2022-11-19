#include <iostream> 
using namespace std;
//Brute-Force soln.
int maxm_subarraySum(int *a, int n){
   int max_sum = 0;
   for(int i = 0; i<n; i++){
      int curr_sum = 0;
        for(int j = i; j<n; j++){
         curr_sum += a[j];

            if (curr_sum > max_sum){
               max_sum = curr_sum;
            }
        }
   }
  return max_sum ;
}

int main(){
   
   int n ; 
   cout  << "Enter no. of elements in array : ";
   cin >> n;
   cout<<endl;
   int  arr[n];
   for(int i=0; i < n; i++){
      cout<<"Element " << i << " : " ;
      cin>>arr[i] ;
      cout<<endl;
   }
   cout << maxm_subarraySum(arr, n) << endl;
    return 0;
}