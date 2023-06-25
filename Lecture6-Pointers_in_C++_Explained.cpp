#include <bits/stdc++.h>
using namespace std;

int main(){
	

	int a = 10;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	
	cout << a << endl; // prints the value of a
	cout << p1 << endl; // prints the address of a
	cout << p2 << endl; // prints the address of p1
	cout << p3 << endl; // prints the address of p2
	
	cout << *p3 << endl; // Derefrencing prints the value of p1 which is stored as a value at p2
	cout << ***p3 << endl;

	***p3 = 50;
	// causes all other pointers dereference to address of a

	// void pointer are those pointers who don't have a data type but an address
	// null pointer are those pointers who have a data type but address is stored null inside it.
	
}
