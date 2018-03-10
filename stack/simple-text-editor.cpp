#include <bits/stdc++.h>
using namespace std;
//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/simple-text-editor/problem


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long q,k,i,type;
    cin>>q;
    string s="",w;
    stack<string> mystack;
    while(q--){
        cin>>type; 
       // cout<<type<<endl;
        if(type == 1){
            cin>>w;
            mystack.push(s);
            s.append(w);
        }
        else if(type == 2){
            mystack.push(s);
            cin >> k;
            while(k){
                s.pop_back();
                k--;
            }
        }
        else if( type == 3){
            cin>>k;
            cout<<s[k-1]<<endl;
        }
        else if(type == 4){
            s = mystack.top();
            mystack.pop();
        }
    }
    return 0;
}

