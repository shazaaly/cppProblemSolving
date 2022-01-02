//https://www.youtube.com/watch?v=9oWd4VJOwr0&list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU&index=99
#include <iostream>
using namespace std;

void selecetion_sort(int arr[], int n){

    for(int i = 0; i<n-1; i++){
        int min= i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;

            }
            if(min != i){
                swap(arr[i], arr[min]);
            }

        }

    }
}

int main() {
	// your code goes here
      int arr[]= { 4,2,9,1,-4,-9 };
    int n = sizeof(arr) / sizeof(int);
    selecetion_sort(arr, n);
    for(auto x :arr){ 
        cout<< x <<" ,";
        }
    
	return 0;
}

