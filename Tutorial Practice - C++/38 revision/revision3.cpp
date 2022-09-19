#include<iostream>
#include<string>
#include<algorithm>

void toUpper(std::string& str){

    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    // return str;
}

void toLower(std::string& str){

    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    // return str;
}

bool myCompare(char A,char B){
        if(A<B){
            return true;
        }
        return false;
}

int main(){
    // std::string str1(5,'N');
    // std::cout<<str1<<std::endl;

    std::string str2("Anish");
    // std::cout<<str2<<std::endl;

    // str1.append(str2);
    // std::cout<<str1<<std::endl;

    // str2=str2+str1;
    // std::cout<<str2<<std::endl;

    // int diff=str1.compare(str2);
    // std::cout<<diff<<std::endl;

    // str1.clear();
    // std::cout<<str1<<std::endl;

    // std::cout<<str1.empty()<<std::endl;

    // str2.erase(5,5);
    // std::cout<<str2<<std::endl;
    // std::cout<<str2.find("i")<<std::endl;
    // std::cout<<str2.insert(5,"lol")<<std::endl;

    // str1=std::tolower('A');
    // std::transform(str2.begin(),str2.end(),str2.begin(),::toupper);
    // std::cout<<str2<<std::endl;

    toUpper(str2);
    std::cout<<str2<<std::endl;
    toLower(str2);
    std::cout<<str2<<std::endl;

    std::sort(str2.begin(),str2.end(),myCompare);
    std::cout<<str2<<std::endl;
}   