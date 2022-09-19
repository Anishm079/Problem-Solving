#include<iostream>
#include<vector>
#include<algorithm>

//all permutations of ans array
void permutation(std::vector<int> &arr,std::vector<std::vector<int>> &ans,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=index;i<arr.size();i++){
        std::swap(arr[i],arr[index]);
        permutation(arr,ans,index+1);
        std::swap(arr[i],arr[index]);
    }
    return;
}

//all unique permutations of an array

void uniquePermutations(std::vector<int> arr,std::vector<std::vector<int>> &ans,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        if(i!=index && arr[i]==arr[index]){
            continue;
        }
        std::swap(arr[i],arr[index]);
        uniquePermutations(arr,ans,index+1);
    }
    return;
}


int main(){
    std::vector<int> arr={1,2,3};
    std::vector<std::vector<int>> ans;
    // uniquePermutations(arr,ans,0);

    //stl trick
    do{
        ans.push_back(arr);
    }while(std::next_permutation(arr.begin(),arr.end()));

    for(int i=0;i<ans.size();i++){
        for (int j = 0; j < arr.size(); j++)
        {
            std::cout<<ans[i][j];
        }std::cout<<std::endl;
    }
    return 0;
}