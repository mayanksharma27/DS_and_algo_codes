#include <bits/stdc++.h>
using namespace std;

//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/equal-stacks/problem


int main(){
    int n1,n2,n3,s1,s2,s3,i;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
    }
    stack<int> st1,st2,st3;s1=s2=s3=0;
    for(i=n1-1;i>=0;i--){
        st1.push(h1[i]);
        s1+=h1[i];
    }
    for(i=n2-1;i>=0;i--){
        st2.push(h2[i]);
        s2+=h2[i];
    }
    for(i=n3-1;i>=0;i--){
        st3.push(h3[i]);
        s3+=h3[i];
    }
    while(!((s1==s2)&&(s2==s3))){
        if(s1>=s3 && s2>=s3){
            if(s1>s3){
                s1-=st1.top();
                st1.pop();
            }
            if(s2>s3){
                s2-=st2.top();
                st2.pop();
            }
        }
        else if(s1>=s2 && s3>=s2){
            if(s1>s2){
                s1-=st1.top();
                st1.pop();
            }
            if(s3>s2){
                s3-=st3.top();
                st3.pop();
            }
        }
        else if(s2>=s1 && s3>=s1){
            if(s2>s1){
                s2-=st2.top();
                st2.pop();
            }
            if(s3>s1){
                s3-=st3.top();
                st3.pop();
            }
        }
        
    }
    
    cout<<s2<<endl;
    return 0;
}

