#include<iostream>
#include<vector>

using namespace std;

//vector<vector<int>> matrixRotation90(vector<vector<int>> arr) {
//	int N = arr.size();
//	for (int i = 0; i < N; i++) {
//		//creatting copy matrix
//		vector<int> copy;
//		copy = arr[i];
//
//
//		//top row
//		int j = 0;
//		while (j < N) {
//			arr[i][j] = arr[N-1-j][i];
//			j++;
//		}
//		//left col
//		j = 0;
//		while (j < N) {
//			arr[j][i] = arr[N-1-i][N-1-j];
//			j++;
//		}
//		//bottom row
//		j = 0;
//		while (j < N) {
//			arr[N-1-i][j] = arr[N-1-j][N-1-i];
//			j++;
//		}
//		//right col
//		j = 0;
//		while (j < N) {
//			arr[N-1-j][N-1-i] = copy[N-1-j];
//			j++;
//		}
//	}
//
//	return arr;
//
//}
 

int main() {
	int N; cin >> N; 
	int** arr = new int*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[N];
		for (int j = 0; j < N; j++){
			cin >> arr[i][j];
		}
	}
	//vector<vector<int>> ans= matrixRotation90(arr);


	//90 deg rotation
	cout << endl;
	int i = 0;
	for (i = 0; i < N/2; i++) {

		//creatting copy matrix
		int *copy=new int[N-i];
		for (int j = i; j < N; j++) {
			copy[j] = arr[i][j];
		}


		//top row
		int j = i;
		while (j < N-i && (N-1-j)>=0) {
			arr[i][j] = arr[N - 1 - j][i];
			j++;
		}
		//left col
		j = i;
		while (j < N-i && (N - 1 - i) >= 0) {
			arr[j][i] = arr[N - 1 - i][j];
			j++;
		}
		//bottom row
		j = i;
		while (j < N-i && (N - 1 - j) >= 0 && (N - 1 - i) >= 0) {
			arr[N - 1 - i][j] = arr[N - 1 - j][N - 1 - i];
			j++;
		}
		//right col
		j = i;
		while (j < N-i && (N - 1 - j) >= 0) {
			arr[N - 1 - j][N - 1 - i] = copy[N - 1 - j];
			j++;
		}
	}

	//90 deg rotation Print
	//cout << endl << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << " ";
		}cout << endl;
	}




	//180 deg rotation
	cout << endl;
	i = 0;
	for (i = 0; i < N / 2; i++) {

		//creatting copy matrix
		int* copy = new int[N - i];
		for (int j = i; j < N; j++) {
			copy[j] = arr[i][j];
		}


		//top row
		int j = i;
		while (j < N - i && (N - 1 - j) >= 0) {
			arr[i][j] = arr[N - 1 - j][i];
			j++;
		}
		//left col
		j = i;
		while (j < N - i && (N - 1 - i) >= 0) {
			arr[j][i] = arr[N - 1 - i][j];
			j++;
		}
		//bottom row
		j = i;
		while (j < N - i && (N - 1 - j) >= 0 && (N - 1 - i) >= 0) {
			arr[N - 1 - i][j] = arr[N - 1 - j][N - 1 - i];
			j++;
		}
		//right col
		j = i;
		while (j < N - i && (N - 1 - j) >= 0) {
			arr[N - 1 - j][N - 1 - i] = copy[N - 1 - j];
			j++;
		}
	}

	//180 deg rotation Print
	cout << endl << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << " ";
		}cout << endl;
	}

}