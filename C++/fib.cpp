#include<iostream>
#include<vector>
using namespace std;


int dynamicFib(int n){

    vector<int> results(n,0);
    results[1]=1;

    for(int i = 2; i <= n; i++) results[i] = results[i-1] + results[i-2];

    return results[n];
}

int main(int argc, char* argv[])
{
    cout<<dynamicFib(atoi(argv[1]))<<endl;
    
    return 0; 
}

/*
5
4       3
3    2. 2. 1
2  1
1 0

0=0
1=1
2=1
3=2
4=3
5=5
6=8
*/