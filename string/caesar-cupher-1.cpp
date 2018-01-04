#include <bits/stdc++.h>

//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/caesar-cipher-1/problem
// Happy New Year 2k18!

using namespace std;

string caesarCipher(string s, int k) {
    // Complete this function
    int i,temp;
    for(i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
          temp = s[i]-'a';
          temp += k;
          temp = temp % 26;
          s[i] = (char)(temp + 'a');
        }
        else if(s[i]>='A' && s[i]<='Z'){
          temp = s[i]-'A';
          temp += k;
          temp = temp % 26;
          s[i] = (char)(temp + 'A');
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    string result = caesarCipher(s, k);
    cout << result << endl;
    return 0;
}

