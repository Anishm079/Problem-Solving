#include <iostream>
using namespace std;

int octalToDecimal(int Num) {
    int sign = 1;
    if (Num < 0) { Num = -Num; sign = -1; }

    int res = 0; int i = 0;
    while (Num > 0) {
        int rem = Num % 10;
        res += (pow(8, i) * rem);
        i++;
        Num /= 10;
    }
    return res*sign;
}

int octalToDecimalWithoutPower(int Num) {
    int res = 0;
    int eight = 1;
    while (eight < Num) {
        eight *= 8;
    }
    eight /= 8;
    //cout << "rev :" << Num << " ";
    int reverse = 0;
    while (Num > 0) {
        reverse *= 10;
        reverse+=(Num % 10);
        Num /= 10;
    }
    cout << "rev :" << reverse << " ";
    int ans =0;
    while (reverse > 0 && eight>0) {
        int rem = reverse % 10;
        ans += (eight * rem);
        eight /= 8;
        reverse /= 10;
    }

    return ans;
}
int main()
{
    int Num;
    cin >> Num;
    cout << octalToDecimalWithoutPower(Num);
    
}
