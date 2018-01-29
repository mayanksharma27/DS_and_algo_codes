#include <bits/stdc++.h>

//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/pangrams/problem
// Happy New Year 2k18!
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin,s);
    int i,a[26]={};
    for(i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z')
        a[s[i]-'a']++;
        else if(s[i]>='A'&& s[i]<='Z')
            a[s[i]-'A']++;
    }
    bool flag = true;
    for(i=0;i<26;i++){
        if(a[i] == 0)flag=false;
    }
    if(flag)cout<<"pangram"<<endl;
    else cout<<"not pangram"<<endl;
    return 0;
}

