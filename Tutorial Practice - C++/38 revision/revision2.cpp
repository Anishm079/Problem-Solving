#include<iostream>

//kaden's algorithm
//it is used to find maxSum in an array (Now)
int maxSumInArray(int *arr,int N){
    int sum=0;int maxSum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxSum=std::max(maxSum,sum);
    }
    return maxSum;
}


//Numbers of 1's in a Number
int numberOfOnes(int N){
    int count=0;
    while(N>0){
        N=  N& (N-1);
        count++;
    }
    return count;
}

//two unique elements in an array of duplicates

bool getBit(int Num,int index){
    return (Num && (Num&(1<<index)));
}


void uniqueElements(int *arr,int N){
    int xorSum=0;
    for(int i=0;i<N;i++){
        xorSum^=arr[i];
    }
    int temp=xorSum;
    int set=0;int pos=0;
    while(set!=1){
        set=xorSum&1;
        pos++;
        xorSum=xorSum>>1;
    }
    int newXor=0;
    for(int i=0;i<N;i++){
        if(getBit(arr[i],pos-1)){
            newXor^=arr[i];
        }
    }

    std::cout<<newXor<<"  ";
    std::cout<<(newXor^temp)<<std::endl;

}


//all subsets of an array
void allSubSets(int *arr,int N){

    for(int i=0;i<(1<<N);i++){
        for (int j = 0; j < N; j++)
        {
            if(i&(1<<j)){
                std::cout<<arr[j]<<" ";
            }
        }std::cout<<std::endl;
        
    }


}


int main(){
    int N;std::cin>>N;
    int *arr=new int[N];
    for(int i=0;i<N;i++){
        std::cin>>arr[i];
    }
    // std::cout<<maxSumInArray(arr,N);
    
    
    // uniqueElements(arr,N);
    // allSubSets(arr,N);

    // std::cout<<numberOfOnes(6);


    //4d array dynamically
    //int ****arr=new int ***[N];
    //arr[i]=new int**[N];
    //arr[i]=new int*[N];
    //arr[i]=new int[N];

//Heap is dynamic allocation uses * and & operators
//stack is about how a function or variable is allocated and removed from memory

    return 0;
}