//Statement: Given an array of 1s and 0s which has all 1s first followed by all 0s?
// Find the number of 0s. Count the number of zeroes in the given array


//.  1010001001

#include <iostream>
#include <vector>
using namespace std;

int countZero( vector<int>inp ){

    int arraySize = inp.size();

    //if there are no 1s in the array
    if(inp[0] != 1)return arraySize;


    int s = 0, e = arraySize-1, mid;

    while(s<=e){

        mid = ((s+e)/2);
        
        if(inp[mid] == 1){

            if(inp[mid+1] == 0) return arraySize-mid-1;

            s = mid+1;
        }
        else{
            
            if(inp[mid-1] == 1) return arraySize-mid;

            e = mid-1;
        }
    }

    return -1;
}


int main(){

    cout<<countZero({1,1,1,1,0})<<endl;
    return 0;
}