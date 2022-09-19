// Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Factorial(int Num) {
	long double res = 1;
	for (int i = Num; i >= 1; i--) {
		res *= i;
	}cout << res << endl;
}
int main()
{
	int Num;
	cin >> Num;
	Factorial(Num);
}
