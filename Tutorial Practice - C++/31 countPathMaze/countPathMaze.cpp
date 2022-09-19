#include<iostream>
#include<string>
using namespace std;

int countPathsMaze(int N,int i,int j){
    if(i==N-1 && j==N-1){
        return 1;
    }
    if(i>N || j>N){
        return 0;
    }
    return countPathsMaze(N,i+1,j)+countPathsMaze(N,i,j+1);
}

int main(){
    int N;cin>>N;
    cout<<countPathsMaze(N,0,0)<<endl;
}