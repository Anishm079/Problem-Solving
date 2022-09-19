#include<iostream>

/*
place n number of queens in n*n matrix such that 
no queens attack each other

SAMPLE INPUT:
5

SAMPLE OUTPUT:
1 0 0 0 0
0 0 1 0 0
0 0 0 0 1
0 1 0 0 0
0 0 0 1 0

*/


bool isSafe(int** arr,int x,int y,int N){
    int row=x;
    int col=y;
    while (row>=0)
    {
        if(arr[row][col]==1){
            return false;
        }
        row--;
    }

    row=x;col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;col--;
    }

    row=x; col=y;

    while(row>=0 && col<N){
        if(arr[row][col]==1){
            return false;
        }
        row--;col++;
    }
    return true;
}


bool nQueen(int **arr,int x,int N){
    if(x>=N){
        return true;
    }
    for(int i=0;i<N;i++){
        if (isSafe(arr,x,i,N))
        {
            arr[x][i]=1;
            if(nQueen(arr,x+1,N)){
                return true;
            }
            arr[x][i]=0;
            return false;
        }
        
    }
    return false;
}




int main(){
    int N;std::cin>>N;
    int **arr=new int*[N];
    for (int i = 0; i < N; i++)
    {
        arr[i]=new int[N];
        for (int j = 0; j < N; j++)
        {
            arr[i][j]=0;
        }
    }


    if (nQueen(arr,0,N))
    {
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                std::cout<<arr[i][j]<<" ";
            }std::cout<<std::endl;
        }
        
    }
    
    
}