/*

  Check if to possible to tranform one string ot another 
  given two strings s1 and s2 (all letters in uppercase). cheak if it is possible to convert s1 to s2 by performing following opration :
  
  1. make some lowercase letter uppercase.
  2. remove all lowercase letters.
  
  ex.
  1. s1 = daBcd s2 = ABC           output = yes;
  2. s2 = argAzVxju s2 = RAJ          output = yes;

  Output:
    daBNcd   does not include   ABC
    argAzxju   includes   RAJ
  
 */

#include<iostream>
using namespace std;
void printPretty(string s1,string s2);


bool strTrans(string s1, string s2){

    int s1p = 0, s2p = 0;

    //loop running only till n i.e. length of the first string 
    //making the time complexity O(N)
    for(;s1p < s1.length();s1p++){

        //if characters match
        if( s1[s1p] == s2[s2p] || toupper(s1[s1p]) == s2[s2p]) s2p++;

        //if capital non matching character is encounterd
        else if( s1[s1p] < 96) s2p = 0;

        //if string 2s pointer reaches the end i.e. string matched
        if(s2p == s2.length()) return true;

    }

    return false;
}


int main()
{
    string s1,s2,s3,s4;
    
    s1 = "daBNcd";
    s2 = "ABC";

    s3 = "argAzxju";
    s4 = "RAJ";

    printPretty(s1,s2);
    printPretty(s3,s4);

    
    return 0;
}


void printPretty(string s1, string s2){

    if(strTrans(s1,s2))
        cout<<s1<<"   includes   "<<s2<<endl;
    else
        cout<<s1<<"   does not include   "<<s2<<endl;

}