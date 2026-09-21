#include<iostream>
#include<utility>

using namespace std;

int main(){

    pair<int,int> p = {5,10};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<int,pair<int,int>> num = {8,{9,10}};
    cout<<num.second.second<<endl; // to access 10

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[2].second;
}