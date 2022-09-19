#include<iostream>
#include<string>
//tower of honoi problem is made to transfer boxes from 
//src to dest tower by moving one in each step
//hiegh weight boxes are always at the bottom 
//and light weight boxes are always at the top in each tower
void towerOfHonoi(int N,char src, char dest,char helper){
    if(N==0){
        return;
    }
    towerOfHonoi(N-1,src,helper,dest);
    std::cout<<"Source : "<<src<<" Destination :"<<dest<<std::endl;
    towerOfHonoi(N-1,helper,dest,src);
}

//to print all subsets of a string
void SubSequences(std::string str,std::string ans){
    if(str.length()==0){
        std::cout<<ans<<std::endl;
        return;
    }
    char ch=str[0];
    std::string ros=str.substr(1);
    SubSequences(ros,ans);
    SubSequences(ros,ans+ch);
}


//all subsets with their ASCII
void subSequenceswithASCII(std::string str,std::string ans){
    if(str.length()==0){
        std::cout<<ans<<std::endl;
        return;
    }
    char ch=str[0];
    int code=str[0];
    std::string ros=str.substr(1);
    subSequenceswithASCII(ros,ans);
    subSequenceswithASCII(ros,ans+ch);
    subSequenceswithASCII(ros,ans+std::to_string(code));
}

//all possible permutations of string
void allPossibleSubsets(std::string str,std::string ans){
    if(str.length()==0){
        std::cout<<ans<<std::endl;
        return;
    }

    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[0];
        std::string ros=str.substr(0,i)+str.substr(i+1);
        allPossibleSubsets(ros,ans+ch);
    }
}

//to count all paths from a number to destination number
//using a dice
int allPaths(int from ,int to){
    if(from==to){
        return 1;
    }
    if(from>to){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=allPaths(from+i,to);
    }
    return count;
}

//rat in a maze
//counting all possible routs to reach N-1 in  a matrix
int ratInMaze(int N,int x,int y){
    if(x==N-1 && y==N-1){
        return 1;
    }
    if(y>=N || x>=N){
        return 0;
    }
    int count=0;
    count+=ratInMaze(N,x+1,y);
    count+=ratInMaze(N,x,y+1);
    return count;
    // return ratInMaze(N,x+1,y)+ratInMaze(N,x,y+1);
}

//tiling ways
int tiling(int N){
    if(N==0||N==1||N==2){
        return N;
    }
    return tiling(N-1)+tiling(N-2);
}

//all possible count of whether friends are paired or alone

int piaredFreinds(int N){
    if(N==0 || N==1 || N==2){
        return N;
    }
    return piaredFreinds(N-1)+piaredFreinds(N-2)*(N-1);
}


int knapSack(int *val,int* weight,int Wt,int N){
    if(N==0){
        return 0;
    }
    if(weight[N-1]>Wt){
        return knapSack(val,weight,Wt,N-1);
    }

    return std::max(knapSack(val,weight,Wt-weight[N-1],N-1)+val[N-1],knapSack(val,weight,Wt,N-1));
}


int main(){

    // towerOfHonoi(3,'A','C','B');
    // allPossibleSubsets("Anish","");
    // std::cout<<allPaths(0,3)<<std::endl;
    int N;std::cin>>N;
    int *val=new int[N];
    int *weight=new int[N];
    for(int i=0;i<N;i++){
       std::cin>>val[i];
    }
    for(int i=0;i<N;i++){
       std::cin>>weight[i];
    }

    int Wt;std::cin>>Wt;
    std::cout<<knapSack(val,weight,Wt,N)<<std::endl;

    // std::cout<<ratInMaze(N,0,0)<<std::endl;;
    // std::cout<<tiling(N)<<std::endl;
    // std::cout<<piaredFreinds(N)<<std::endl;
    // std::cout<<piaredFreinds(N)<<std::endl;
    return 0;
}