#include<iostream>
#include<vector>
using namespace std;


int binarySearch( vector<int> inp, int target ){

    int s = 0, e = inp.size()-1 ,mid;

    
    while(s<=e){

        mid = (s + e)/2;

        if(inp[mid] == target){
            return mid;
            break;
        }
        else if(inp[mid] > target){
            e = mid-1;
        }
        else 
            s = mid+1;
    }
    return -1;
}

int main(){

    cout<<binarySearch( {1,2,3,7,8,9,10,11}, 10 )<<endl;

    return 0;
}