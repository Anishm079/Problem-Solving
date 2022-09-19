#include<iostream>
#include<vector>
#include<algorithm>
//permutations using stl functions

int main(){
    std::vector<int> v{1,2,3};

    std::vector<std::vector<int>> ans;

    sort(v.begin(),v.end());
    do
    {
        ans.push_back(v);
    } while (std::next_permutation(v.begin(),v.end()));
    

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            std::cout<<ans[i][j]<<" ";
        }std::cout<<std::endl;
        
    }
    return 0;
}