#include<iostream>

using namespace std;

int main(){
int N;
cin>>N;
int A[N];
for(int i = 0; i < N; i++){
 cin>>A[i];
}
int B[N];
for(int i = 0; i < N; i++){
 int count = 1;
 for(int j = i+1; j < N; j++) {
  if(A[i] == A[j]){
   count++;
   for(int k = j; k < N; k++){
    A[k] = A[k+1];
   }
   j--;
   N--;
  }
 }
 B[i] = count;
}
for(int i = 0; i < N; i++){
 for(int j = 0; j < N-i-1; j++) {
  if(B[j] < B[j+1])  {
   int temp = B[j];
   B[j] = B[j+1];
   B[j+1] = temp;
   temp = A[j];
   A[j] = A[j+1];
   A[j+1] = temp;
  }
 }
}

for(int i = N-1; i >=0; i--){
//  for(int j = 0; j < B[i]; j++){
  cout<<A[i]<<" ";
//  }
}

return 0;

}