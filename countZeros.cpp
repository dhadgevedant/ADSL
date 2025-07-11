//Statement: Given an array of 1s and 0s which has all 1s first followed by all 0s?
// Find the number of 0s. Count the number of zeroes in the given array


//.  1010001001

#include <iostream>
#include <vector>
using namespace std;

int countZero( vector<int>inp ){

    int i = 0, count = 0;

    while(i < inp.size()){

        //if cur is 1, then next is always 0 so no need to check next one so +2 and count++
        //if cur is 0 then also count++ but only increment i +1
        //no matter what happens the count is alywas goind to increase
        
        if(inp[i]==1)i+=2;
        else i++;

        count++;
    }

    return count;
}


int main(){

    cout<<countZero({1,0,0,1,0,1,0,0})<<endl;
    return 0;
}