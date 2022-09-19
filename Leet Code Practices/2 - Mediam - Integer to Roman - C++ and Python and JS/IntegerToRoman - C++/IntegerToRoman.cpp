// IntegerToRoman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

//int power(int num, int x) {
//    for (int i = 1; i < x; i++)
//        num *= num;
//    return num;
//}

string IntegerToRoman(int num) {
    string ans="";
    int deci = num;
    while (deci >= 1000 && deci <= 3999) {
        ans += "M";
        deci -= 1000;
    }
    if (deci >= 900 and deci<=999) {
        ans += "CM"; deci -= 900;
    }
    if (deci >= 500 and deci <= 899) {
        ans += "D";
        deci %= 500;
    }
    if (deci == 400) {
        ans += "CD";
        deci -= 400;
    }

    while (deci >= 100 && deci <= 399) {
        ans += "C";
        deci -= 100;
    }
    if (deci >= 90 && deci <= 99) {
        ans += "XC"; deci -= 90;
    }
    if (deci >= 50 and deci <= 89) {
        ans += "L";
        deci %= 50;
    }
    if (deci == 40) {
        ans += "XL";
        deci -= 40;
    }
    
    while (deci >= 10 && deci <= 39) {
        ans += "X";
        deci -= 10;
    }
    if (deci == 9) {
        ans += "IX";
        deci -= 9;
    }
    if (deci >= 5 and deci <= 8) {
        ans += "V";
        deci %= 5;
    }
    if (deci == 4) {
        ans += "IV"; deci -= 4;
    }

    while (deci > 0 && deci < 4) {
        ans += "I";
        deci--;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    cout << IntegerToRoman(num)<<endl;
}
