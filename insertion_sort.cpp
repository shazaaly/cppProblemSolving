
#include <iostream>
using namespace std;

void insertion_sort (int arr[], int n){
    for(int i = 1; i<n-1 ; i++){
        int temp = arr[i];
        int j= i-1;
        
        while( j>= 0  and  arr[j] > temp){
            // push the larger to right-->
            arr[j+1] = arr[j];
           j = j-1;

        }
        //the empty place is the place we shift to :
        arr[j + 1] = temp;

    }
}

int main() {
	// your code goes here
      int arr[]= { -12,2,-5,6,-7,12,15,59};
    int n = sizeof(arr) / sizeof(int);
    insertion_sort(arr, n);
    for(auto x :arr){ 
        cout<< x <<" ,";
        }
    
	return 0;
}

