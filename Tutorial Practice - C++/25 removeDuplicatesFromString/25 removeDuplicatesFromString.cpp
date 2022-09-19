#include<iostream>
using namespace std;

//to remove consecutive duplicate elements from string ex:-aaabbbccc to abc

string removeDuplicates(string str) {
	if (str.length() == 0) {
		return "";
	}
	char ch = str[0];
	string ans = removeDuplicates(str.substr(1));
	if (ch == ans[0]) {
		return ans;
	}
	return ch + ans;
}

int main() {
	string str;
	cin >> str;
	cout<<removeDuplicates(str);
}