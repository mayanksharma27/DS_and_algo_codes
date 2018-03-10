#include <bits/stdc++.h>
using namespace std;

//@author : Mayank Sharma
// this is a solution to https://www.hackerrank.com/challenges/largest-rectangle/problem
// for better understanding please refer to this awesome tutorial by Tushar roy
// tutorial : https://youtu.be/ZmnqCZp9bBs
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n,i,area,max_area, temp;
    stack<long> s;
    cin>>n;
    long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    s.push(0);
    area = max_area = 0;
    for(i=1;i<n;i++){
        //if the next building height is greater than or equal to the height of building at the index
        //present on the top then push onto stack
        if(a[i]>=a[s.top()])s.push(i);
         else{
             while(!s.empty() && a[s.top()] > a[i]){
                 temp = s.top();
                 s.pop();
                 if(s.empty()){
                     area = a[temp]*i;
                 }
                 else{
                     area = a[temp] * (i-1-s.top());
                 }
                 if(area > max_area)max_area = area;
             }
             s.push(i);
         }   
    }
    while(!s.empty()){
        temp = s.top();
        s.pop();
        if(s.empty()){
            area = a[temp]*i;
        }
        else{
            area = a[temp] * (i-1-s.top());
        }
        if(area > max_area)max_area = area;
    }
    cout<<max_area<<endl;
    return 0;
}

