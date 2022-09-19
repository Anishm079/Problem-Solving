#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence(int arr[],int N){
    set<int> st;
    sort(arr,arr+N);
    for(int i=0;i<N;i++){
        st.push_back(arr[i]);
    }
    for(int i=0;i<st.;i++){
        if(st.find(arr[i]+1)){
            return i;
        }
    }
    return -1;
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<longestConsecutiveSequence(arr,N);
}