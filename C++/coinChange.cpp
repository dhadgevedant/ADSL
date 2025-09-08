/*  Coin Change (Minimum Coins)
    Statement: Make value V with minimum coins.
    Input coins] = (1, 2, 5, 10, 20}, V = 43
    Output Coins used: 20 20 2 1

    compile and run: 
    g++ coinChange.cpp -o coinChange && ./coinChange <ammount1> <ammount2> <ammount3> ....
*/ 

#include <iostream>
#include <vector>
using namespace std;

class currency{

    public:
        vector<int> coins;
        vector<int> all;

}Indian{{1,2,5,10,20},{1,2,5,10,20,50,100,200,500,2000}},
 USA{{},{}};


//coin array should contain a coin with value 1
//coin array should not be empty
vector<int> coinChange( int ammount, vector<int> coins = Indian.all ){

    //failsafes
    sort(coins.begin(), coins.end());
    if(ammount <= 0 || coins.size() <= 0 || coins[0] != 1 || coins[0] < 1) return {};

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

int main(int argc, char* argv[]) {
    if(argc < 2) {
        cerr << "Usage: " << argv[0] << " <amount1> <amount2> ..." << endl;
        return 1;
    }

    // Loop through each argument starting from argv[1]
    for(int i = 1; i < argc; i++) {
        int amt = atoi(argv[i]);

        vector<int> change = coinChange(amt, Indian.all);

        cout << amt << " => ";
        for(int c : change) cout << c << " ";
        cout << endl;
    }

    return 0;
}




