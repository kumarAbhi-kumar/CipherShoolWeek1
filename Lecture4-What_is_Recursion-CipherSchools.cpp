#include <bits/stdc++.h>
using namespace std;

//With iterative approach

//int power(int base, int pow){
//	int num = 1;
//	for(int i = 0; i < pow; i++){
//		num *= base;
//	}	
//	return num;
//}

//With recursion Approach

int power(int base, int pow){
	// 1. base case
	// 2. assumption
	// 3. cat.
	
	if(pow == 0)
		return 1;
	
	int smlAns = power(base, pow - 1); // smlAns -> 2^2
	
	return smlAns*base;
}

int main(){
	cout<<power(2, 3);
	return 0;
}
