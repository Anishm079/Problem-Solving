#include<iostream>
#include<vector>
#include<algorithm>

void helper(std::vector<int> a,std::vector<std::vector<int>> &ans,int index){
    if(index==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=0;i<a.size();i++){
        if(i!=index && a[i]==a[index]){
            continue;
        }
        std::swap(a[i],a[index]);
        helper(a,ans,index+1);

    }
}

std::vector<std::vector<int>> permute(std::vector<int> a){
    std::vector<std::vector<int>> ans;
    std::sort(a.begin(),a.end(),[](int a,int b){
        if(a<b){
            return true;
        }
        return false;
    });
    helper(a,ans,0);
    return ans;
}


int main(){
    std::vector<int> v{1,2,3};

    std::vector<std::vector<int>> ans=permute(v);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            std::cout<<ans[i][j]<<" ";
        }std::cout<<std::endl;
        
    }
    

}