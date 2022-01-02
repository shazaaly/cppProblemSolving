#include <iostream>
#include <algorithm>
using namespace std;

//reverse by adding the comparator function to the reverse method in main:
bool compare(int a, int b){
    return a > b;
}

int main() {
	// your code goes here
      int arr[]= { 4,2,9,1,-4,-9 };
    int n = sizeof(arr) / sizeof(int);

   // sort( arr, arr + n, compare);
    sort( arr, arr + n, greater<int>());
  //  reverse( arr, arr + n);

    for( int x: arr){
        cout<< x<<" ";

    }

        
	return 0;
}

