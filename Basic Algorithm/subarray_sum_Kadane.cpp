
#include <iostream>
using namespace std;

int kadaneSum(int arr[], int n){

    int current_sum= 0;
    int largest = 0;

    for(int i = 0; i<n; i++){
        current_sum += arr[i];
        if( current_sum <0 ){
            current_sum=0;

        }
        largest = max(current_sum , largest);

    }
    return largest;
   
    
    }

int main() {
    
	// your code goes here
     int arr[] = {-1,2,5,9,-6,12};
    int n = sizeof(arr) / sizeof(int);
   // print_subs(arr, n);

   cout<<"largets Sum is:  " <<kadaneSum(arr, n);
	return 0;
}

