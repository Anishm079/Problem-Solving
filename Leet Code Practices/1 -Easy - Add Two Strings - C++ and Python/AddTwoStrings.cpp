#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string AddTwoString(string str1,string str2){
    int i=str1.length()-1,j=str2.length()-1;
    string ans="";
    int carry=0;
    while(i>=0 || j>=0 || carry>0){
        int sum=0;
        if(i>=0) sum += str1[i] - '0' ;
        if(j>=0) sum += str2[j] - '0' ;

        sum+=carry;
        //cout<<sum<<endl;
        carry = sum / 10;
        ans += to_string((sum%10));
        i--; j--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<AddTwoString(str1,str2);
    return 0;
}
