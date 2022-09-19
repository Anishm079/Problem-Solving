#include<iostream>
#include<algorithm>
using namespace std;

//given a bag of that can hold up to weight W 
//and given two arrays V[] and W[] for item values and thier weight respectively
//task is to fill the bag that can hold most valued items with thier at most weights
//that bag can hold them.

int knapSack(int V[],int W[],int N,int Wt){
    if(N==0 || W<=0){
        return 0;
    }
    if(W[N-1]>Wt){
        //when weight of item is more than bag's capacity
        //just leave the item and go for next one
        return knapSack(V,W,N-1,Wt);
    }
    //when you an item you have
    // to leave the item or you have to collect it
    //and you have to calculate max value collected when you left item or collected it
    return max((knapSack(V,W,N-1,Wt-W[N-1])+V[N-1]),knapSack(V,W,N-1,Wt));
}

int main(){
    int V[]={1,2,3,4,5,6};
    int W[]={3,2,3,1,3,2};
    cout<<knapSack(V,W,6,12);
    return 0;
}