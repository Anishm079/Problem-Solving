#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str="anish ahamd mulla";
	//cin >> str;
	

	//sorting in strings
	sort(str.begin(), str.end());
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
	cout << str << endl;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}



	//to uppercase using default function
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout << str << endl;



	//to lowercase using default function
	/*transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << str << endl;*/

	/*sort(str.begin(), str.end(), greater<int>());
	cout << str << endl;*/
}