
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){

    for( int times=1; times<=n-1 ; times++){
        for(int j = 0; j<= n-times-1; j++){
            if(arr[j] >  arr[j+1]){
                swap(arr[j], arr[j+1]);

            }
            

        }

    }

}

int main() {
	// your code goes here

    int arr[]= { -12,2,-5,6,-7,12,15,59};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);
    for( auto x : arr){
        cout<< x<<", ";
    }
	return 0;
}

