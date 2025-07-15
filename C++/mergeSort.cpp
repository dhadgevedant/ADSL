/*
    3 2 4 1
    3 2 | 4 1
    3   | 2 | 4 1
*/
#include<iostream>
#include<vector>
using namespace std;

void devideMerge(vector<int>& inp, int s,int m, int e){

    //getting the sizes of left array and right array
    int ls = m-s+1;
    int rs = e-m;

    //init vectors of those sizes
    vector<int> l(ls),r(rs);

    //now fill up left and right vectors
    for(int i=0;i<ls;i++) l[i] = (inp[s+i]);

    for(int i= 0; i < rs; i++) r[i] = (inp[m+1+i]);

    //now merging while sorting ls and rs
    int i = 0, j = 0;
    int orignalArrayIndex = s;

    while( i < ls && j < rs ){

        if(l[i] <= r[j]){
            inp[orignalArrayIndex] = l[i];
            i++;
        }
        else{
            inp[orignalArrayIndex] = r[j];
            j++;
        }
        orignalArrayIndex++;
    }

    //filling the left places in orignal array
    while (i < ls) {
        inp[orignalArrayIndex] = l[i];
        i++;
        orignalArrayIndex++;
    }
    while (j < rs) {
        inp[orignalArrayIndex] = r[j];
        j++;
        orignalArrayIndex++;
    }
}

void SystemMergeSort(vector<int>& inp, int s, int e){

    if(s >= e)return;

    int mid = (s+e)/2;
    
    //getting to the LEFT most element in the array
    SystemMergeSort(inp,s,mid);
    
    //getting to the RIGHT most element in the array
    SystemMergeSort(inp,mid+1,e);

    //now deviding and merging the array from the above set left most and right most element
    devideMerge(inp,s,mid,e);
}

void mergeSort(vector<int>& inp){ 
    SystemMergeSort(inp,0,inp.size()-1);
}


int main(){

    vector<int> inp = {9,7,6,5,4,10,3,2,1};
    
    cout<<"Before Sort: ";
    for (int x : inp) std::cout << x << " ";

    mergeSort(inp);
   

    cout<<"After Sort: ";
    for (int x : inp) std::cout << x << " ";


    return 0;
}