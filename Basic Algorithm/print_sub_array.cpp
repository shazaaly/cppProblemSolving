
#include <iostream>
using namespace std;

 //Brute Forse Approach

int largest_sub_sum(int arr[], int n){
    int largest_sum = 0;
    for(int i= 0; i<n; i++){

        for(int j=0; j<n; j++){
            int subarray_sum = 0;
        
            for(int k =i; k<= j; k++){
                subarray_sum += arr[k];
                //check which is largest subarray_sum vs largest_sum:
                               
                }

                largest_sum = max(largest_sum , subarray_sum);
                cout<<endl;
                
            }
            
        }
        return largest_sum;

    }

    //Brute Forse Approach

int main() {
	// your code goes here

    int arr[] = {-1,2,-5,9,-6,12};
    int n = sizeof(arr) / sizeof(int);
   // print_subs(arr, n);

   cout<<largest_sub_sum(arr, n);
  
  

	return 0;
}

