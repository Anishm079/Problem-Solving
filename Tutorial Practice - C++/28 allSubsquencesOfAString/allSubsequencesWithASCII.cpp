#include<iostream>
#include<string>
using namespace std;

void allSubstringsWithASCII(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    int code=ch;
    string ros=str.substr(1);
    allSubstringsWithASCII(ros,ans);A
    allSubstringsWithASCII(ros,ans+ch);
    allSubstringsWithASCII(ros,ans+to_string(code));
}

int main(){
    string str;cin>>str;
    allSubstringsWithASCII(str,"");
}