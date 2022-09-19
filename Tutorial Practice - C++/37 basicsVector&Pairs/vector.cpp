#include<vector>
#include<iostream>
#include<algorithm>

int main(){
    //declaration of vector
    std::vector<int> v;
    //intialization ways
    //mathod 1
    std::vector<int> v1{1,2,3,4,5};
    //method 2
    v={1,3,4,2,5};
    //method 3
    std::vector<int> v(3,5); //{5,5,5}
    //initialization of vector size
    std::vector<int> v3(100);//array of size 100 is declared


    //insertion of elements into vector
    v1.push_back(6);
    v1.push_back(7);

    //swap vectors
    std::swap(v,v1);

    //sorting in vectors
    std::sort(v.begin(),v.end());

    //ways to print vectors
    //method 1
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
    }std::cout<<std::endl;
    //method 2
    for(auto i:v){
        std::cout<<i<<" ";
    }std::cout<<std::endl;
    //method 3
    std::vector<int> ::iterator it; //iterator is addres variable of vector
    for(it=v.begin();it!=v.end();it++){ //it iterates through address of each element of vector
        std::cout<<*it<<" ";        //* is used to catch the value of it
    }std::cout<<std::endl;
    

}