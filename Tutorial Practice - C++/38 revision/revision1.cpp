#include<iostream>

void fibonacci(int N){
    int first=0;
    int second=1;
    for (int i = 0; i < N; i++)
    {
        std::cout<<first<<" ";
        int temp=first+second;
        first=second;
        second=temp;
    }
}


int decimalToBinary(int N){
    int x=1;int ans=0;
    while(x<=N){
        x*=2;
    }
    x/=2;

    while(x>0){
        int lastelement=N/x;
        N-=lastelement*x;
        x/=2;
        ans=ans*10+lastelement;
    }
    return ans;
}

int main(){
    std::cout<<decimalToBinary(8)<<std::endl;
    // fibonacci(5);
}