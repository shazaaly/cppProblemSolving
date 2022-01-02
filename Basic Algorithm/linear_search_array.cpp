
#include <iostream>
using namespace std;

int search_array( int arr[], int n, int key){

    for(int i =0; i<n; i++){
        if( arr[i] == key){
        	// return index
            return i;

        }

    }
    return -1;

}

int main() {
	// your code goes here
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);
    int k;
    cout<<"enter element to search for .. ";
    cin>>k;
    int index = search_array(arr, n, k );
    if(index != -1 ){
    	cout<<" Key exists at index: "<<index<<endl;
    	
	}else{
		cout<< " Key is not here";
	}
	//return 0;
}

