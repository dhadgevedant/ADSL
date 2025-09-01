/*
Coin Change (Minimum Coins)
Statement: Make value V with minimum coins.
59,62
Input coins] = (1, 2, 5, 10, 20}, V = 43
Output Coins used: 20 2021
*/ 


#include <iostream>
#include <vector>
using namespace std;


//array should be sorted
//array should contain a coin with value 1
//array should not be empty
vector<int> coinChange(vector<int> coins, int ammount){


    //failsafes
    if(ammount < 0 || coins.size() <= 0 || coins[0] != 1) return {};


    //initailizing output vector that will hold change
    vector<int> change;

    //pointing currCoin to largest available coin
    int currCoin = coins.size()-1;
    

    while(ammount){

        if(ammount - coins[currCoin] >= 0){

            ammount -= coins[currCoin];
            change.push_back(coins[currCoin]);

        }
        else currCoin--;

    }

    return change;
}

int main(){

    
    vector<int> change = coinChange({1,2,5,10,20}, 43);

    for(int x : change) cout<<x<<" ";
    
    
    cout<<endl;



    return 0;
}

