#include<iostream>
#include<vector>

//permutations by using recurssion

void permutation(std::vector<int> a , std::vector<std::vector<int>> &ans,int index){
    if(index==a.size()){
        ans.push_back(a);
        return;
    }

    for(int i=index;i<a.size();i++){
        std::swap(a[i],a[index]);
        permutation(a,ans,index+1);
        std::swap(a[i],a[index]);
    }
    return;
}

int main(){
    std::vector<int> v1{1,2,3};

    //to check permutations
    std::vector<std::vector<int>> ans;
    permutation(v1,ans,0);

    for(int i=0;i<ans.size();i++){
        for (int j = 0; j < v1.size(); j++)
        {
            std::cout<<ans[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}