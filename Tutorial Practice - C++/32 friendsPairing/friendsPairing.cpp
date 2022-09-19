#include<iostream>
#include<string>
using namespace std;

//Number of ways in which friends can be single or paired up.

int friendsPairing(int N){
    if(N==0 ||N==1||N==2){
        return N;
    }
    //friendaPairing(N-1)=> excluding an odd member |and|
    // friendsPairing(N-2)*(N-1) =>including all members and odd member 
    return friendsPairing(N-1)+friendsPairing(N-2)*(N-1);
}

int main(){
    int N;cin>>N;
    cout<<friendsPairing(N);
}
