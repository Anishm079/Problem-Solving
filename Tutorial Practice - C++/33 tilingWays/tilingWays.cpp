#include<iostream>

using namespace std;

//No of ways to place tiles in 2*N matrix
//where tile sizes can be 1*2 or 2*1


int tilingWays(int N){
    if(N==0 || N==1 || N==2){
        return N;
    }
    return tilingWays(N-1)+tilingWays(N-2);
}

int main(){
    int N;cin>>N;
    cout<<tilingWays(N);
}