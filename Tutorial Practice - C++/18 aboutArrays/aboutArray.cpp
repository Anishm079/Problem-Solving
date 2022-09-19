#include<iostream>
using namespace std;

int main(){


    //declaration with given number of blocks
    int N;cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    //declaration of array in dynamic way
    int *Arr=new int[N];
    for(int i=0;i<N;i++){
        cin>>Arr[i];
    }
    for(int i=0;i<N;i++){
        cout<<Arr[i]<<" ";
    }cout<<endl;

    //declaration of mulit dimensional array with given value
    int MultArr[N][N][N];
    //declaration of multidimensional array dynamically
    int ***multiarr;
    multiarr=new int**[N];
    for(int i=0;i<N;i++){
        multiarr[i]=new int*[N];
        for(int j=0;j<N;j++){
            multiarr[i][j]=new int[N];
            for(int k=0;k<N;k++){
                cin>>multiarr[i][j][k];
            }
        }
    } 

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++) {
                cout<<multiarr[i][j][k]<<"   ";
            }cout<<endl;
        }cout<<endl;
    }
    


    //diff between subarray and subsquences
    //subarray is continuous part of array
    //subsquence is part of array which not continuous part of array
    //random elements of arrray are picked in subsequence (positions doesn't matter here)
    //subarray calc as :- ((N)(N+1))/2;
    

}