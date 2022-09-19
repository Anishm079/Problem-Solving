#include<iostream>

bool isSafe(int** arr,int N,int x,int y){

    int row=x;int col=y;

    while(row>=0){
        if(arr[row][y]==1){
            return false;
        }
        row--;
    }
    row=x;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;col--;

    }

    row=x;col=y;
    while(row>=0 && col<N){
        if(arr[row][col]==1){
            return false;
        }
        row--;col++;
    }

    return true;
}


bool nQueen(int **arr,int N,int x){
    if(x>=N){
        return true;
    }

    for(int i=0;i<N;i++){
        if(isSafe(arr,N,x,i)){
            arr[x][i]=1;
            if(nQueen(arr,N,x+1)){
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
    int** arr=new int*[N];
    for (int i = 0; i < N; i++)
    {
        arr[i]=new int[N];
        for (int j = 0; j < N; j++)
        {
           arr[i][j]=0;
        }
    }
    
    if(nQueen(arr,N,0)){
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                std::cout<<arr[i][j]<<" ";
            }std::cout<<std::endl;
            
        }
        
    }
    return 0;

}