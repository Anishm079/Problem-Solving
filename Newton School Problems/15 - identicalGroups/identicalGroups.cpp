#include<iostream>
using namespace std;

int identicalGroups(int a, int b) {
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(a==0){return b;}

    return identicalGroups(b%a,a);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<identicalGroups(a,b);
}