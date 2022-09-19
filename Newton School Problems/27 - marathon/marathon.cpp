#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

//drinks energy at check a check point and move to next check point 
//when he drinks energy at a check point distance to that check is not included 
//untill he round up to that point
//energy=E[i]  
//energy-=(D[i]+E[i+1]);
//if energy at start point is less than distance to next point return false
//if energy at start point is less than 0 return false
//if no point exist print -1
//if he pass through all check points return true and print that index
//

bool marathon(int E[],int D[],int N,int index){
    long long energy=E[index];
    

    //make run for curr checkpoint to Nth ckeck point
    for(int i=index;i<N;i++){
        if(energy<=0 || energy<D[i]){
            return false;
        }
        energy=energy-D[i];
        energy+=E[(i+1)%N];
    }


    // run from Nth to curr checkpoint to complete marathon
    for(int i=0;i<index;i++){
        if(energy<=0 || energy<D[i]){
            return false;
        }
        energy=energy-D[i];
        energy+=E[i+1];
    }
    return true;
}

int main() {

	// Your code here
    int N;cin>>N;
    int E[N];
    int D[N];
    for(int i=0;i<N;i++){
        cin>>E[i];
        cin>>D[i];
    }

    int i=1;
    bool  check=false;
    while(i<=N){
        if(marathon(E,D,N,i-1)){
            check=true;
            break;
        }
        i++;
    }

    if(check==true){
        cout<<i;
    }else
        cout<<"-1";

    return 0;
}