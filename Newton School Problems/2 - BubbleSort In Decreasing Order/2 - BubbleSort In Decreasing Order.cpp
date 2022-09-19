// 2 - BubbleSort In Decreasing Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void bubbleSortInDecre(int arr[], int N) {

	//Bubble Sort In  Incre Order
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N-i; j++) {
			if (arr[j] > arr[j-1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}

	//Bubble Sort In Decre Order
	/*for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j >= i; j--) {
			if (arr[j - 1] < arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}*/

	//Printing array
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}

int main()
{
	int N; cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	bubbleSortInDecre(arr, N);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
