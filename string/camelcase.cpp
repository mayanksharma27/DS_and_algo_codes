#include <bits/stdc++.h>
//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/camelcase/problem
// happy new year 2018
using namespace std;

int camelcase(string s) {
    // Complete this function
    int i,count=1;
    for(i=0;i<s.length();i++){
        if(s[i]>='A'&& s[i]<='Z')count++;        
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}

