#include <bits/stdc++.h>
//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/mars-exploration/problem
// Happy New Year 2k18!
using namespace std;

int marsExploration(string s) {
     // Complete this function
    string sos="SOS";
    int i,j,count=0;
    for(i=j=0;i<s.length();i++){
        if(s[i] != sos[j])count++;
        j++;
        j = j%3 ;
    }
   return count;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}

