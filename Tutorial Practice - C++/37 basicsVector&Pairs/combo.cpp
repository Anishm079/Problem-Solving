#include<iostream>
#include<vector>

int main(){
    //declaration
    std::vector<std::pair<int,int>> vp;

    //ways of initialization
    std::vector<std::pair<int,int>> vp1{{1,2},{2,3},{3,4}};
    std::vector<std::pair<int,int>> vp2={{1,2},{2,3},{3,4}};
    std::vector<std::pair<int,int>> vp3={std::make_pair(1,2),std::make_pair(2,3),std::make_pair(3,4)};


    //inserting elements
    for (int i = 0; i <2; i++)
    {
        int a,b;std::cin>>a>>b;
        vp1.push_back({a,b});//or vp1.push_back(std::make_pair(a,b));
    }

    //printing
    for(auto i:vp1){
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }
    return 0;
}
