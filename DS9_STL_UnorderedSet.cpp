#include <iostream>
#include<unordered_set>
using namespace std;

int main() 
{

    //This is also same as the set only difference being it's unordered

   unordered_set<int> uns = {2,2,2,1,4,3,2,1};

   for(auto it : uns){
    cout<<it<<endl;
   } // You never know how it's gonna store the data; it's randomized

    cout<<endl;

    uns.insert({6,7,8,9,9});

    
   for(auto it : uns){
    cout<<it<<endl;
   }

   uns.erase(4);
   cout<<endl;
    
   for(auto it : uns){
    cout<<it<<endl;
   }

}