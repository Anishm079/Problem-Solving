#include<iostream>
#include<string>

using namespace std;

void allPossibleSubstring(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        //substr(0,<0);=>false;
        string ros=str.substr(0,i)+str.substr(i+1);
        allPossibleSubstring(ros,ans+ch);
    }
}

int main(){
    string str;cin>>str;
    allPossibleSubstring(str,"");

    return 0;
}