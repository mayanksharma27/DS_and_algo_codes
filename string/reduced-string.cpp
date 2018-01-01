#include <bits/stdc++.h>
//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/reduced-string/problem
// Happy New Year!
using namespace std;

string super_reduced_string(string s){
    // Complete this function
    stack<char> s1;
    int i=0;
    for(i=0;i<s.length();i++){
        if(s1.empty())s1.push(s[i]);
        else{
            if(s1.top()==s[i])s1.pop();
            else s1.push(s[i]);
        }
    }
    if(s1.empty())return "Empty String";
    else{
        string temp;
        while(!s1.empty()){
            temp.push_back(s1.top());
            s1.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}

