#include<iostream>
#include<string>
using namespace std;

int countAllPaths(int start,int end){
    if(start==end)
        return 1;

    if(start>end){
        return 0;
    }
    int count=0;

    for(int i=1;i<=6;i++){ 
        //to check all dice Numbers (1->6)
        count+=countAllPaths(start+i,end);
        /*counts for all those possible numbers that 
        can make us reach "end" and only to reach "end"(N)
         Not To Pass Through It  */
    }

    return count;
}

int main(){
    int N;cin>>N;
    //to count all paths from 0 to N;
    //0->1->2->..N    and 0->2->3->..N and 0->2->4->..N and so..on
    cout<<countAllPaths(0,N);
}