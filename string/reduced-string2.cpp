#include <bits/stdc++.h>
//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/reduced-string/problem
// Happy New Year 2018!

using namespace std;

string super_reduced_string(string s){
    // Complete this function
    for(int i = 0 ; i< s.length();){
        if(i+1<s.length()&&s[i]==s[i+1]){
            s.erase(s.begin()+i+1);
            s.erase(s.begin()+i);
            i=0;
        }
        else 
            i++;
    }
    if(s.empty())s="Empty String";
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}

