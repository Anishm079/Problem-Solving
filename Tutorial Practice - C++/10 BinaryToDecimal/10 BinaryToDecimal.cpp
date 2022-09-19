#include <iostream>
using namespace std;
int binaryToDecimal(int Num) {
    int ans = 0;
    int x = 1;
    while (Num >0) {
        int rem = Num%10;
        int sum = rem * x; 
        x *= 2;
        ans += sum;
        Num /= 10;
    }
    return ans;
}

int main()
{
    int Num; cin >> Num;
    cout << binaryToDecimal(Num);
}