/*
    Statement: Given a number n. The task is to find the smallest number whose factorial 
    contains at least n trailing zeroes.

    number of trailing zeros of a factorial is defined by the following formula
    k is increasing index form 1
    and p is prime factor 5 which is responsible for the trailing zeros
    i.e. 5 x 2 = 10 ....

    zeroes(x) = x/5 + x/25 + x/125 + ... (until x/5^k < 1)

    ->  x ( 1/5 + 1/25 + 1/125..... ) = n
    ->  1/n ( 1/5 + 1/25 + 1/125..... ) = 1/x
    ->  1/5n + 1/25n + 1/125n... = 1/x


*/

#include <iostream>
using namespace std;

int countTrailingZeros(int x){

    int cnt = 0;

    while (x > 0){
        x = x/5;
        cnt += x;
    }
    return cnt;
}

int trailingFactorialZeros(int n){

    int s = 0, e = n*5, mid;
    while(s<e){
        mid = (s+e)/2;

        if(countTrailingZeros(mid) < n){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }

    return s;
}

int main(){

    cout<<trailingFactorialZeros(50)<<endl;

    return 0;
}



