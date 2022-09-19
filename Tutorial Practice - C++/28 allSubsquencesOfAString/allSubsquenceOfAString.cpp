#include<iostream>
#include<string>
using namespace std;

void subsequencesOfAString(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string ros=str.substr(1);
    subsequencesOfAString(ros,ans);
    subsequencesOfAString(ros,ans+ch);
}

int main(){ 
    string str;
    cin>>str;
    subsequencesOfAString(str,"");
    return 0;
}