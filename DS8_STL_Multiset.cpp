#include <iostream>
#include<set>
using namespace std;

int main() 
{

    //This is also same as the set only difference being it also stores the duplicate items

    multiset<int> ms = {1,2,2,3,3};

    for(auto it : ms){
        cout<<it<<endl;
    }
    cout<<endl;
    ms.insert(1);
    ms.emplace(1);

    for(auto it : ms){
        cout<<it<<endl;
    }

    cout<<endl;

    cout<<ms.count(1)<<endl;
    cout<<endl;

    ms.erase(1); // removes all the instance of 1
    ms.erase(ms.find(2)); //just removes one instance
    for(auto it : ms){
        cout<<it<<endl;
    }
    cout<<endl;

}