#include <bits/stdc++.h>

//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/weighted-uniform-string/problem
// Happy New Year 2k18!


using namespace std;


int main(){
    set<int> myset;
    string s;
    cin >> s;
    int n,x,i,count;
    myset.insert(s[0]-'a'+1);
    count =1;
    for(i=1;i<s.length();i++){
        if(s[i] == s[i-1])count++;
        else 
            count =1;
        
            myset.insert((s[i]-'a'+1)*count);
    }
    
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
      
        cin >> x;
        // your code goes here
        if(myset.find(x)!= myset.end())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

