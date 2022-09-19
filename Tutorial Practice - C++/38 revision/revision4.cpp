#include<iostream>

bool getBit(int Num,int pos){
    return (Num&(1<<pos));
}

int setBit(int Num,int pos){
    return (Num|(1<<pos));
}

//finding a unique element in triplets array
int uniqueElement(int* arr,int N){
    int sum=0;
    for(int i=0;i<69;i++){
        for(int j=0;j<N;j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
    }
    int res=0;
    if(sum%3!=0){
        res=setBit(res,sum%3);
        return res;
    }
    return -1;
}

void sieveErotosthenese(int N){
    int *arr=new int[N+1];

    for(int i=0;i<=N;i++){
        arr[i]=0;
    }

    for(int i=2;i<=N;i++){
        if(arr[i]==0){
            for (int j = i*i; j <=N; j+=i)
            {
                arr[j]=1;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if(arr[i]==0){
            std::cout<<i<<" ";
        }
    }
    
    // return arr;
}


//Nth fibonacci Number

int fib(int N){
    if(N==0 || N==1){
        return N;
    }
    return fib(N-1)+fib(N-2);
}

//remove adjusent dublicate character strings
std::string removeDublicates(std::string s){
    if(s.empty()){
        return "";
    }
    char ch=s[0];
    std::string ros=removeDublicates(s.substr(1));
    if(ch==ros[0]){
        return ros;
    }
    return ch+ros;
}

//gcd of two numbers

int GCD(int a ,int b){
    if(b==0)
        return a;

    if(a<b){
        return GCD(b,a);
    }
    return GCD(b,a%b);
}


int main(){
    int N;std::cin>>N;
    // int *arr=new int[N+1];
    // for (int i = 0; i < N; i++)
    // {
    //     std::cin>>arr[i];
    // }
    
    // sieveErotosthenese(N);

    // std::cout<<removeDublicates("aaabbbcccddd")<<std::endl;
    
    std::cout<<GCD(36,16)<<std::endl;

    // for(int i=0;i<=N;i++){
    //     if(arr[i]==0){
    //         std::cout<<arr[i]<<" ";
    //     }
    // }

    // std::cout<<uniqueElement(arr,N)<<std::endl;


    return 0;
}