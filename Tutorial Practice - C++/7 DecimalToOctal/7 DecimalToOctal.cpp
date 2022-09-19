#include <iostream>
using namespace std;

int decimalToOctave(int Num) {
    int reverse = 0;
    while (Num > 0) {
        int rem = Num % 8;
        reverse *= 10;
        reverse +=rem;
        cout << "reverse : " << reverse << endl;
        Num /= 8;
    }

    int ans = 0;
    while (reverse > 0) {
        int rem = reverse % 10;
        ans *= 10;
        ans += (rem );
        reverse /= 10;
    }

    return ans;
}


int main()
{
    //std::cout << "Hello World!\n";
    /*int num = 8;
    int N = 100;*/
    /*while (N > 0) {
        cout << N % 8 << " ";
        N /= num;
    }*/
    int Num;
    cin >> Num;
    cout<<decimalToOctave(Num)<<endl;

}
