
// 9 DecimalToBinary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string DecimalToBinary(int Num) {
    string ans="";
    while (Num > 0) {
        int rem = Num % 2;
        ans += (rem + '0');
        Num /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;

}
//Apna College Code
int DecimalToBinaryAP(int num){
    int ans = 0, x = 1;
    while (x <= num) {
        x *= 2;
    }x /= 2;
    while (x > 0) {
        int lastDigit = num / x;
        num -= lastDigit * x;
        ans *= 10;
        ans += lastDigit;
        x /= 2;
    }
    return ans;
}
int main()
{
    int Num; cin >> Num;
    cout << DecimalToBinaryAP(Num);
}
