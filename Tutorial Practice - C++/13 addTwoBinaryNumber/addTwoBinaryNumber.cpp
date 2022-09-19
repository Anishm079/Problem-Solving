#include<iostream>
using namespace std;

int reverse(int n) {
	int ans = 0;
	while (n > 0) {
		ans = ans * 10 + (n % 10);
		n /= 10;
	}
	return ans;
}

//It wont work for 111+111

int addTwoBinaryNumber(int num1, int num2) {
	int ans = 0, prevCarry = 0;
	while (num1 > 0 && num2 > 0) {
		if (num1 % 2 == 0 && num2 % 2 == 0) {
			ans = ans * 10 + prevCarry;
			prevCarry = 0;
		}
		else if ((num1 % 2 == 1 && num2 % 2 == 0) || (num1 % 2 == 0 && num2 % 2 == 1)) {
			if (prevCarry) {
				ans = ans * 10 + 0;
				prevCarry = 1;
			}
			else {
				ans = ans * 10 + 1;
				prevCarry = 0;
			}
			
		}
		else {
			ans = ans * 10 + prevCarry;
			prevCarry = 1;
		}
		num1 /= 10; num2 /= 10;
	}

	while (num1 > 0) {
		if (prevCarry == 1) {
			ans = ans * 10 + 0;
			prevCarry = 1;
		}
		else {
			ans = ans * 10 + (num1%2);
			prevCarry = 0;
		}
		num1 /= 10;
	}

	while (num2 > 0) {
		if (prevCarry == 1) {
			ans = ans * 10 + 0;
			prevCarry = 1;
		}
		else {
			ans = ans * 10 + (num2 % 2);
			prevCarry = 0;
		}
		num2 /= 10;
	}


	if (prevCarry == 1) {
		ans = ans * 10 + 1;
	}

	return reverse(ans);
}

int main() {
	int num1, num2; cin >> num1 >> num2;
	cout << addTwoBinaryNumber(num1, num2);
}