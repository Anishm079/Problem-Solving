#include<iostream>
#include<string>
using namespace std;
//Sample Input "axbxxcdfxs" To Sample Output "abcdfsxxxx"

string moveAllX(string str){
    if(str.length()==0){
        return "";
    }
    char ch=str[0];
    string ans=moveAllX(str.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }
    return (ch+ans);
}

int main(){
    string str;
    getline(cin,str);

    cout<<moveAllX(str);

    return 0;
}