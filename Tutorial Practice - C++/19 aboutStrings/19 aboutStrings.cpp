#include<iostream>
#include<string>
#include<sstream>
#include<string.h>
using namespace std;

int main() {
	string str;
	//takings string input without white space
	//cin >> str;
	

	 
	//taking whole line as input
	getline(cin, str);



	//to print
	cout << str << endl;



	//to get length or size of string
	cout << str.size() << endl << str.size() << endl;



	//to access elements
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}cout << endl;



	//to cocatinate strings
	
	// 1) using default function
	str.append(" Anish");
	cout << "string concat1 :" << str<<"  Method 1"<<endl;

	//2)using + operator
	str += " ahamad";
	cout << "string concat2 :" << str << "  Method 2" << endl;

	//3)with stringstream header function
	stringstream ss;
	ss << str << " Mulla";
	str = ss.str();
	//ss>>str;
	cout << "string concat3 :" << str << "  Method 3" << endl;

	//4)char array concat with strig.h header or cstring header
	//char arr1[] = "Hello Anish",arr2[]=" Ahamad Mulla";
	//strcat(arr1, arr2);
	//cout << "with char array string concat :" << arr1 << endl;
	
	//5) Inserting Single Element at string end;
	str.push_back(' ');
	str.push_back('1');
	str.push_back('2');
	str.push_back('3');
	cout << "string concat4 :" << str << "  Method 4" << endl;

	//To get substring from a string
	string substring = str.substr(0, 9);
	cout <<"SubString :"<< substring << endl;

	//compare Strings 
	cout << str.compare(substring)<<endl;
	//if str.compare(substring)==0 they are same strings
	substring = str.substr(0, str.size());
	cout << str.compare(substring)<<endl;


	//to erase characters from string
	str.erase(str.size()-4,3);//(indexNo,NoOfElementsFromTheIndex)
	cout <<"erase :"<< str << endl;



	//to find a substring
	str.find("Anish");//returns first index of occurence of substring



	//to insert string at specific index
	str.insert(str.find("Anish"), "Anish");//(indexNo,StringToBeInserted)




	//to Clear the String
	str.clear();//make string empty



	//to Convert string to int
	str = "123";
	int Num = stoi(str);
	cout << "string to int" <<Num<< endl;
	//to convert int to string
	str = to_string(Num);
	cout << "Num to string :" << endl;
	//conversion can be done through stringstream variable
	stringstream Num1(str);
	Num1 >>Num;
	cout <<"conversion using sstream to int :" << Num << endl;
	stringstream tostr(Num);
	tostr >> str;
	cout << "conversion using sstream to string :" << str << endl;



	//to check whether the string is empty or not
	cout << str.empty() << endl; //return 1 for being empty and 0 for not being empty(bool)



}