// std::vector - dynamic array

#include<iostream>
#include<utility>
#include<vector>

int main(){

    std::vector<int> v;
    v = {1,2,3};

    v.push_back(4);
    v.emplace_back(5);

    v.pop_back();

    std::cout<<v.size();
    std::cout<<v.capacity();
    
    
}