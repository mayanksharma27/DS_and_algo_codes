#include <bits/stdc++.h>

using namespace std;
//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/balanced-brackets/problem


string isBalanced(string s) {
    // Complete this function
    int len = s.length(),i;
    stack<char> mystack;
    for(i=0;i<len;i++){
        if(s[i] == '{'|| s[i] == '('|| s[i] == '['){
            mystack.push(s[i]);
        }
        else{
            if(s[i] == '}'){
                if(mystack.empty() || mystack.top() != '{'){
                    return "NO";
                }
                mystack.pop();
            }
            else if(s[i] == ']'){
                if(mystack.empty() || mystack.top() != '['){
                    return "NO";
                }
                mystack.pop();
            }
            else if(s[i] == ')'){
                if(mystack.empty() || mystack.top() != '('){
                    return "NO";
                }
                mystack.pop();
            }
        }
    }
    if(mystack.empty()) return "YES";
    else return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}

