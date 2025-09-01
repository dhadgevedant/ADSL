/*
    Problem Statement: Find the element appearing more than n/2 times using devide and conqure

    1 2 2 

*/

#include<iostream>
using namespace std;

int majorityElement(vector<int>& nums) {

       for(int i=0;i<nums.size();i++){

            if(count(nums.begin(),nums.end(), nums[i]) > nums.size()/2){

                return nums[i];
            }
       } 

       return 0;
    }

int main()
{
    
    
    return 0;
}