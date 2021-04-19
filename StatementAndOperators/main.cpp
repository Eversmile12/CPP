#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


int calculate_pairs(vector<int> vec){
    if(vec.size() <= 1) 
        return 0;
    
    int result{0};
    for(unsigned i{0}; i < vec.size(); i++){
        for(unsigned j{i+1}; j < vec.size(); j++){
            result +=  (vec.at(i)*vec.at(j));
        }
    }
    
    return result;
}

int main(int argc, char **argv)
{
//    int sum {};
//    for(int i{0}; i < 16; i++){
//        if(i%2)
//        sum+=i;
//    }

//======================================================

//    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
//    //---- WRITE YOUR CODE BELOW THIS LINE----
//    int count{};
//    for(auto n : vec){
//        if((n%3 == 0) || (n%5==0)){
//            count += 1;    
//        }
//    }
//    
//    cout << count;

// ===========================================================

    vector<int> vec = {2,4,6,8};
    calculate_pairs(vec);
}


