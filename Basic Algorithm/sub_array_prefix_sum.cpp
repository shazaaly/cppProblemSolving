
#include <iostream>
using namespace std;

int prefix_sum(int arr[], int n){
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for(int i=1 ; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];

    }
    //largest_sum
    int largest_sum = 0;
    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){

            int subarray_sum =  i>0? prefix[j] - prefix[i-1] : prefix[j];
            largest_sum = max(largest_sum, subarray_sum);
            
        }

    }
    return largest_sum;



    }

int main() {
    
	// your code goes here
     int arr[] = {-1,2,5,9,-6,12};
    int n = sizeof(arr) / sizeof(int);
   // print_subs(arr, n);

   cout<<prefix_sum(arr, n);
	return 0;
}

