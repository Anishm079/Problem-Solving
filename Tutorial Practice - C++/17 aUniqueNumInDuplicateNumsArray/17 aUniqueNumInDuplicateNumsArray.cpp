// 17 aUniqueNumInDuplicateNumsArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;


bool getBit(int num, int pos) {
    return num & (1 << pos);
}

int setBit(int num, int pos) {
    return (num | (1 << pos));
}


int aUniqueNumInDuplicateNumsArray(int arr[], int N) {
    int xorSum = 0;
    for (int i = 0; i < N; i++) {
        xorSum ^= arr[i];
    }
    return xorSum;
}

void twoUniqueNumsInDuplicateArray(int arr[], int N) {
    int xorSum = 0;
    for (int i = 0; i < N; i++) {
        xorSum ^= arr[i];
    }
    int pos = 0,count=0; int temp = xorSum;
    int setbit = 0;
    //cout << xorSum << endl;
    while (setbit == 0) {
        setbit = xorSum & 1;
        pos++;
        xorSum=xorSum>>1;
    }
    //cout << pos << endl;
    int newXor = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] & (1 << (pos - 1))) {
            newXor ^= arr[i];
        }
    }
    cout << newXor << endl;
    cout << (newXor ^ temp) << endl;
}


int aUniqueNumInNumTripletsArray(int arr[], int N) {
    int sum = 0;
    for (int i = 0; i <65; i++) {
        for (int j = 0; j < N; j++) {
            if (getBit(arr[j],i) ){
                sum++;
            }
        }
    }
    if (sum % 3 != 0) {
        return setBit(0, (sum%3)-1);
    }return -1;
}


int main()
{
    int N; cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    //cout << aUniqueNumInDuplicateNumsArray(arr,N);
    //twoUniqueNumsInDuplicateArray(arr, N);
    cout << aUniqueNumInNumTripletsArray(arr, N);
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
