#include <bits/stdc++.h>
using namespace std;

/* 
	While overloading a function:
		1. Same name
		2. either different number of parameters or different types of parameters.
		
*/


// defining the funtion 
int sum(int a, int b = 0);

int maxi(int n1, int n2){
	if(n1 > n2)
		return n1;
	return n2;
}

int maxi(int n1, int n2, int n3){
	if(n1 > n2)
		if(n1 > n3)
			return n1;
	
	else
		if(n2 > n3)
			return n2;
		return n3;
}

int maxi(int n1, int n2, int n3, int n4){
//	One approach
//	int a = maxi(n1, n2);
//	int b = maxi(n3, n4);
//	
//	return maxi(a, b);

//	Another Approach

	int a = maxi(n1, n2, n3);
	return maxi(a, n4);
}

// pass by pointer
void increment(int *a){
	(*a)++;
	cout << "increment via pointer: ";
}

// 
void increment(int &a){ // receiving via address
	a++;
	cout << "increment via address: ";
	return;
}

int main(){
	cout << sum(2, 30) << endl; // Output : 32
	cout << sum(2) << endl; // Output : 2
	cout << maxi(2, 5) << endl;
	cout << maxi(2, 5, 3) << endl;
	cout << maxi(2, 5, 3, 7) << endl;
	
	int i = 5;
	increment(&i);
	cout << i << endl;
	
	increment(i);
	cout << i << endl;
	return 0;
}

//declaring the function

//int sum(int a, int b)
//{
//	return a+b;
//}


// Providing defaut values starts from right to left
int sum(int a, int b){
	return a+b;
}
