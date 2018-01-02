#include <bits/stdc++.h>
//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/hackerrank-in-a-string/
// Happy New Year 2018!
using namespace std;

int main() {
  
    int l1,l2,i,j,q;
    string input,hr = "hackerrank";
    l2 = hr.length();
    cin>>q;
    while(q--){
        cin>>input;
        l1= input.length();
        for(i=j=0;i<l1;i++){
            if(input[i] == hr[j])j++;
        }
        if(j == l2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

