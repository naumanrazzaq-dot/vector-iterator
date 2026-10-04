#include <iostream>
#include<string>
#include <vector>
using namespace std;

int main(){

    vector<int> vec={1,2,3,4,5};

    //this is like pointer and it will derefrence and give that location value
    
cout<<*(vec.begin())<<endl;

// begin represent first value but end not give last value it give next to last value like garbage value

cout<<*(vec.end());
};




