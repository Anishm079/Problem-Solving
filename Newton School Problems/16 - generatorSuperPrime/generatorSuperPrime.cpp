#include<bits/stdc++.h>
using namespace std;
/*
PROBLEM STATEMENT:
For a given integer N, super primes are those integers from 1 to N whose multiples (other than themselves) do no exist in the range [1, N].
Your task is to generate all super primes <= N in sorted order.

*/
void generatorSuperPrime(int N){
    // vector<int> arr;int j=0;
    for(int i=2;i<=N;i++){
        if((i+i)<=N){continue;}
        cout<<i<<" ";
    }
    // for(int i=0;i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }

}

int main(){
    int N;cin>> N;
    
    generatorSuperPrime(N);
}