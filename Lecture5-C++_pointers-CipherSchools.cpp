#include <bits/stdc++.h>
using namespace std;

int main(){
	int a = 10;
	int *p = &a;
	
	cout << &a << endl; 
	cout << p << endl;
	
	//Both would print the address of a 
	
	// Here dereferencing comes in picture.
	// Here it prints the value at the corresponding address
	cout << *(&a) << endl;
	cout << *p << endl;
	
	char ch = 'a';
	char* pch = &ch;
	
	// Here we see that every pointer is just a hexadecimal number.
	// The data dytpes associated describes what data type can they store. And hence can be used derefrencing
	if(sizeof(pch) == sizeof(p)){
		cout<<"hey"<<endl;
	}
	else{
		cout<<"hii"<<endl;
	}
	
	//Output for above: hey
	
	int **p1 = &p; // pointer variable holding address of another pointer variable
	int ***p2 = &p1;
	
	return 0;
}
