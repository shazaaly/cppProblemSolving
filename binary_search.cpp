
#include <iostream>
using namespace std;

int binary_search( int arr[], int n, int key)
{
    //binary search implement: 
    int s =0;
    int e = n-1;

    while( s <= e){
        int mid = (s+e) /2;
        if(arr[mid] == key){
            return mid;

        }else if(arr[mid] > key){
            e = mid-1;

        }else{
             e = mid + 1;

        }

    }
    return -1;

};
int main() {
	// your code goes here

   
    int arr[] ={10,20,25,26,58,70,100,120,200};

    int n = sizeof(arr) / sizeof(int);
     cout<<"You are looking for No? ...";
    int k;
    cin>>k;
  
    int index = binary_search(arr, n, k);
     if(index != -1 ){
    	cout<<" Key exists at index: "<<index<<endl;
    	
	}else{
		cout<< " Key is not here";
	}

	//return 0;
}

