#include<bits/stdc++.h>

using namespace std;


void solve (vector<int> arr,int n)

{

int max=n,i;

priority_queue<int> p;

for(i=0;i<n;i++){

p.push(arr[i]);

while(p.top()==max){

cout<<p.top()<<" ";

p.pop();

max--;

}

cout<<endl;

}

}



int main(){
    int N;cin>>N;
    vector<int> arr(N);

    for(auto &i:arr){
        cin>>i;
    }
    solve(arr,N);
    return 0;
}