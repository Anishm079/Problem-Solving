#include<iostream>
#include<vector>

int main(){
    //declaration of pairs
    std::pair<int,int> pr;
    //ways of inititialization
    std::pair<int,int> pr1{1,2};
    std::pair<int,char> pr2={1,'a'};
    pr.first=5;pr.second=10;
    int a=10;int b(4); 
    std::pair<int,char> pr3(std::make_pair(a,'b'));

    // swap values
    swap(pr2,pr3);

    //printing 
    std::cout<<pr3.first<<" "<<pr3.second<<std::endl;
    std::cout<<pr2.first<<" "<<pr2.second<<std::endl;
    // std::cout<<std::endl;
}