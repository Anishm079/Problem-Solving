#include<iostream>
/*
Problem Statement:
find path for mouse to get off of mouse cage matrix
matrix contains 0's and 1's
index's which contains 1's is the Safe and Only rout for mouse 
to escape

SAMPLE INPUT:
5
1 1 1 0 0
0 1 0 1 0
0 1 0 1 1
1 1 1 1 1
0 0 0 0 1

SAMPLE OUTPUT:
1 1 0 0 0 
0 1 0 0 0 
0 1 0 0 0 
0 1 1 1 1 
0 0 0 0 1

*/

bool isSafe(int **arr,int N,int x,int y){
    if(x<N && y<N && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratInMaze(int **arr,int x,int y,int N,int **sol){
    if(x==N-1 && y==N-1 ){
        sol[x][y]=1;
        return true;
    }
    if(x>=N || y>=N){
        return false;
    }
    if(isSafe(arr,N,x,y)){
        sol[x][y]=1;
        if(ratInMaze(arr,x+1,y,N,sol)){
            return true;
        }
        if(ratInMaze(arr,x,y+1,N,sol)){
            return true;
        }
        sol[x][y]=0;
        return false;
    }
    return false;
}


int main(){
    int N;std::cin>>N;
    int **arr=new int*[N];
    for(int i=0;i<N;i++){
        arr[i]=new int[N];
        for (int j = 0; j < N; j++)
        {
            /* code */
            std::cin>>arr[i][j];
        }
    }
    int **sol=new int*[N];
    for(int i=0;i<N;i++){
        sol[i]=new int[N];
        for(int j=0;j<N;j++){
            sol[i][j]=0;
        }
    }

    ratInMaze(arr,0,0,N,sol);

    for(int i=0;i<N;i++){
        for (int j = 0; j < N; j++)
        {
            /* code */
            std::cout<<sol[i][j]<<" ";
        }std::cout<<std::endl;
    }
    return 0;
}