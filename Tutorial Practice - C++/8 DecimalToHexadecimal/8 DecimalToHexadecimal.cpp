#include <iostream>
using namespace std;

string DecimalToHexadecimal(int Num) {
	string ans="";
	string reversed = "";
	while (Num > 0) {
		int rem = Num % 16; Num /= 16;
		if (rem >= 0 && rem <= 9) {
			reversed += (rem + '0');
		}
		else if (rem >= 10 && rem <= 15) {
			//int mob = rem % 10;
			switch (rem) {
			case 10:reversed += "A"; break;
			case 11:reversed += "B"; break;
			case 12:reversed += "C"; break;
			case 13:reversed += "D"; break;
			case 14:reversed += "E"; break;
			case 15:reversed += "F"; break;
			}
		}
		
	}
	ans = reversed;
	reverse(ans.begin(), ans.end());
	return ans;
}
//Apna College Method
string DecimalToHexadecimals(int Num) {
	int x = 1;
	while (x <= Num) {
		x *= 16;
	}
	x /= 16;
	string ans = "";
	while (x > 0) {
		int lastNum = Num / x;
		Num -= lastNum * x;


		if (lastNum >= 0 && lastNum <= 9) {
			ans += (lastNum + '0');
		}
		else if (lastNum>=10 && lastNum<=15) {
			ans += ('A' + lastNum - 10);
		}


		x /= 16;
	}
	return ans;
}

int main()
{
	//cout << "Hello World!\n";
	int Num; cin >> Num;
	cout << DecimalToHexadecimals(Num) << endl;
}
