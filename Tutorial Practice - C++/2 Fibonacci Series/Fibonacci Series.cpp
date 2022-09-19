// Fibonacci Series.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Fib(int n) {
    int first = 0;
    int second = 1;
    cout << first << " ";
    for (int i = 0; i < n; i++) {
        cout << second << " ";
        int nextT = first + second;
        first = second;
        second = nextT;
    }
}

int main()
{
    int N;
    cin >> N;
    Fib(N);
}
