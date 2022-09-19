#include <iostream> // header file includes every Standard library
using namespace std;

long calcSum(long Num){
    long sum=0;
    while(Num>0){
        sum+=(Num%10);
        Num/=10;
    }
    return sum;
}


long sieveErothosthenese(long N){
    // if(N==1){return 0;}
    long count=0;
    long arr[N+1];
    for(long i=0;i<=N;i++){
        arr[i]=0;
    }

    for(long i=2;i<=N;i++){
        if(arr[i]==0){
            // count++;
            for(long long j=(i*i);j<=N;j+=i){
                arr[j]=1;
            }
        }
    }
    long copy;
    for(long i=N;i>=0;i--) {
        if(arr[i]==0){
            // cout<<i<<" ";
            count++;
            if(count==2){
                copy=i;
                break;
            }
        }
    }cout<<endl;



    return copy;
}

int main() {

	// Your code here
    long N;cin>>N;

    cout<<calcSum(sieveErothosthenese(N));


    return 0;
}