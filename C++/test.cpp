#include<iostream>
using namespace std;

int countTrailing(int x){

    int cnt = 0;

    while( x > 0){
        x /= 5;
        cnt += x;
    } 
    return cnt;
}

int minFact(int n){
  
    int s=0, e = n*5, mid = 0;
  
    while(s<e){

        mid = s + (e-s)/2;

        if( countTrailing(mid) < n ) s = mid+1;
        else e = mid;
    }

    return s;
}


int main()
{
    cout<<minFact(50);
    return 0;
}




