
#include <iostream>
using namespace std;

void reverse_array(int arr[], int n){
    int s = 0;
    int e =n-1;

    while( s < e){
        swap(arr[s], arr[e]);
        s+=1;
        e-=1;
    }



}

int main() {
	// your code goes here

    int arr[] = {10,20,30,40,80,70,90,100};
    int n = sizeof(arr) / sizeof(int);

    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";

    }
    cout<<endl;
    

    reverse_array(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    

	//return 0;
}

