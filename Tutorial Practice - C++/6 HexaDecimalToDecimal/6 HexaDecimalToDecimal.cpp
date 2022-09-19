#include <iostream>
using namespace std;

using namespace std;

int HexadecimalToDecimal(string str) {
    int res = 0; int j = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] >= 'A' && str[i] <= 'F') {
            //res *= 10;
            res += (int(str[i]-'0') - 7)*pow(16,j);
        }
        else if(str[i]>='0' && str[i]<='9') {
            res += (int(str[i] - '0') * pow(16, j));
        }
        j++;
    }
    return res;
}

int main()
{
    string str; cin >> str;
    cout <<HexadecimalToDecimal(str);
    //cout << int('A'-'0') << endl;
}
