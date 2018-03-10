#include <bits/stdc++.h>

using namespace std;

//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/maximum-element/problem


int main() {
    stack<long> s,max;
    long n,x,type;
    cin>>n;
    while(n--){
        cin>>type;
        if(type == 1) {
            cin>>x;
            s.push(x);
            if(max.empty()||x>=max.top())max.push(x);
        }
        else if(type ==2){
            if(s.top()==max.top())max.pop();
            s.pop();
        }
        else if(type == 3){
            cout<<max.top()<<endl;
        }
    }
    return 0;
}

