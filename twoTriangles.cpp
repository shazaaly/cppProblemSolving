#include<iostream>
using namespace std;

int main() {
	
	for( int lines =1 ; lines<=5 ; lines++){   // outer for: rows contain 2 for : 1- spaces  2- stars
		
		for(int spaces=5; spaces>=lines; spaces --){   //lines = 1, space =5  || lines =1 space 4
			cout<<" ";
							
		}
	
		
		for( int z = 1; z<=lines ; z++){  //line 1 z 1 || lines 2 z 1,2
			cout<<"* ";
			
		}
		cout<<endl;
		
	}
	




}




