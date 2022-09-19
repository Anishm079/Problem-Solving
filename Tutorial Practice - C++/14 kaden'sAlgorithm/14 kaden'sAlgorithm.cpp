#include<iostream>
using namespace std;
// This algorithm is to find the maxSum of subArray in an Array

int kadane(int arr[], int N) {
	int currSum = 0; int maxSum = 0;
	for (int i = 0; i < N; i++) {
		currSum += arr[i];
		if (currSum < 0) {
			currSum = 0;
		}
		maxSum = max(maxSum, currSum);
	}
	return maxSum;
}

int main() {
	int N; cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cout << kadane(arr, N);
}