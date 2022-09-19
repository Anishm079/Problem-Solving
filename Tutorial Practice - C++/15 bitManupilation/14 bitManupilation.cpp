#include<iostream>
using namespace std;

bool getBit(int num, int pos) {
	return num & (1 << (pos-1));
}


int setBit(int num, int pos) {
	return num | (1 << (pos - 1));
}


int clearBit(int num, int pos) {
	int mask = ~(1 << (pos-1));
	return num & mask;
}


int updateBit(int num, int pos,int val) {
	int mask = ~(1 << (pos - 1));
	num &= mask;
	return num | (val << (pos - 1));
}


bool isPowerOf2(int num) {
	return(num && !(num & (num - 1)));
}


int numberOfOnes(int num) {
	int count = 0;
	while (num) {
		num = num & (num - 1);
		count++;
	}
	return count;
}

int main() {
	int num; cin >> num;
	//int pos; cin >> pos;
	//int val; cin >> val;
	//cout<<updateBit(num, pos,val)<<endl;
	//cout << (isPowerOf2(num) ? "Yes" : "No");
	cout<<numberOfOnes(num);
	return 0;
}