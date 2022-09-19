#include<bits/stdc++.h>
using namespace std;

string AddTwoString(string str1, string str2) {
    int i = str1.length(), j = str2.length();
    string ans = "";
    int sum = 0, carry = 0;
    while (i >= 0 || j >= 0 || carry = 1) {
        sum = str1[i] - '0' + str2[j] - '0' + carry;
        carry = sum / 10;
        ans += to_string((sum % 10));
        i--; j--;
    }
    return ans;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    cout << AddTwoString(str1, str2);
    return 0;
}
