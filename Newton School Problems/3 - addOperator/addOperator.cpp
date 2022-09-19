#include<bits/stdc++.h>//need to add + or - operator in between 
using namespace std;
//the numbers of an array which become equal to K

//to devide this problem 1st approach is
//make diff functions for + and - operators // wrong analysis of problem

/*bool isNumberEqualsTo(int arr[],int N,int K){
    if(N==0) return false;


    if(arr[N-1]==K){
        return true;
    }

    return isNumberEqualsTo(arr,N-1,K);
}

bool addOperator(int arr[],int N,int K){
    
    for(int i = 0; i < N; i++){
        if(isNumberEqualsTo(arr,N,K-arr[i]) || isNumberEqualsTo(arr,N,K+arr[i])){
            return true;
        }
    }
    return false;
}*/



//approach two
//add a function with a total variable which add + or - operator and count sum



bool addOperator(long long int arr[],int N,long long int K,long long int total){
    if(N==0){
        if(K==total) {return true;}
        else {return false;}
    }
// cout<<N<<endl;
    return (addOperator(arr,N-1,K,total+arr[N-1]) || addOperator(arr,N-1,K,total-arr[N-1]));
}


int main() {

	// Your code here
    int N,K;
    cin>>N>>K;
    long long int *arr=new long long int[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    //Main Code
    if(addOperator(arr,N,K,0)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
