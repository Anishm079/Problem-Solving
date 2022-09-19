#include<iostream>
using namespace std;
//to calculate nth number in fibonacci series
int NthNumInFibSeries(int N) {
	if (N == 0 || N == 1) {
		return N;
	}
	return NthNumInFibSeries(N - 1) + NthNumInFibSeries(N - 2);
}


int main() {
	int N; cin >> N;
	cout << NthNumInFibSeries(N);
}