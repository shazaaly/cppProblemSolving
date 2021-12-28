/*
The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X% and its price P after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X and P (1≤X≤99,1≤P≤4×104) – the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.
*/

#include<iostream>
using namespace std;

int main() {
	
	//20 80

	double discount, price;
	cin>> discount>> price;
	double result;
	
	double percentPaid = 100-discount;  // 80% 
	double pricecut = (discount * price) / percentPaid;
	double wholePrice  = pricecut + price;
	cout<<wholePrice;

}









