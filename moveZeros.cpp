//Given an array of random numbers,
// Push all the zeroes of a given array to the end of the array.

//using two pointer approach

#include<iostream>
#include<vector>
using namespace std;


void moveZeros( vector<int> &inp){
    
    int s = 0, e = inp.size()-1;
    
    //setting e to farthest non zero element
    while(inp[e] == 0)e--;

    while(s <= e){

        if(inp[s] == 0){

            swap(inp[s], inp[e]);
            e--;

        }
        else s++;
    }

}

int main(){

    vector <int> a = {1,0,0,1,0,1,1,0,1,0,1,1,0,1,0,0,0};
    moveZeros(a);
    
    
    for (int x : a) {
        std::cout << x << " ";
    }
}