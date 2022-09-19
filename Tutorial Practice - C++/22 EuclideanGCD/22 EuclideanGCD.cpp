#include<iostream>

using namespace std;


//easiest way find gcd of two Numbers

//recursively 1
int euclideanGCDRecursively(int a, int b) {
	if (b == 0) {
		return a;
	}
	return euclideanGCDRecursively(b, a % b);
}


//recursively 1
int euclideanGCD(int a, int b) {
	if (b <= 0) {
		return a;
	}
	a = a - b;
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	
	return euclideanGCD(a, b);
}


//iteratively 1
int euclideGCP1(int a, int b) {
	while (b != 0) {
		int rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

//iteratively 2
int euclideGCP2(int a, int b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	while (b > 0) {
		a = a - b;
		if (a < b) {
			int temp = a;
			a = b;
			b = temp;
		}
	}
	return a;
}

int main() {
	int a, b; cin >> a >> b;
	cout<< euclideGCP2(a, b);
}