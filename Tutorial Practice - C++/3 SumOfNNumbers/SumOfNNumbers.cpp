// SumOfNNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void SumOfNNumbers(int Num) {
    int sum = 0;
    for (int i = 1; i <= Num; i++)
        sum += i;

    cout << sum<<endl;
}

int SumWithFormulae(int Num) {
    return (Num * (Num + 1)) / 2;
}

int main()
{
    int Num; cin >> Num;
    cout<<SumWithFormulae(Num);
}
