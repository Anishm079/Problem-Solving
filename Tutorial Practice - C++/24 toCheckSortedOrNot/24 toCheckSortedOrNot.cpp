#include<iostream>
using namespace std;

bool isSorted(int arr[], int N) {
	if (N == 1) {
		return true;
	}
	bool restArray = isSorted(arr, N - 1);
	return ((arr[0]<arr[1])&&restArray);
}



int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	if (isSorted(arr, N)) {
		cout << "Yes , Its Sorted!!!";
	}else{
		cout << "No , Its Not Sorted!!!!!";
	}
}