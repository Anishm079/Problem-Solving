#include<iostream>
#include<vector>
using namespace std;


void sieveOfErotosthenesForPrimeNumbers(int N) {
	int *v=new int[N+1];
	for (int i = 0; i <= N; i++)
		v[i] = 0;


	for (int i = 2; i <= N; i++) {
		if (v[i] == 0) {		//marking the multiples of prime numbers 
			for (int j = i * i; j <= N; j += i) {
				v[j] = 1;
			}
		}
	}


	for (int i = 2; i <= N; i++) {
		if (v[i] == 0) {
			cout << "Prime Number :" << i << endl;
		}
	}

}

int main() {
	int N; cin >> N;
	/*int *arr=new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}*/

	sieveOfErotosthenesForPrimeNumbers(N);

}