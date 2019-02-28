//https://www.geeksforgeeks.org/count-triplets-with-sum-smaller-that-a-given-value/
#include <bits/stdc++.h>
using namespace std;

int getCount(int a[],int n,int sum){
    int i,j,k=n-1,count=0;
    sort(a,a+n);
    for(i=0;i<n;i++){
        j=i+1;
        while(j<k){
            if(a[i]+a[j]+a[k] >= sum)
                k--;
            else{
                count+=(k-j);
                j++;
            }
        }
    }
    return count;
}

int main()
{
    int i,n,a[100],sum;
    cin>>n>>sum;
    for(i=0;i<n;i++)cin>>a[i];
    cout<<getCount(a,n,sum);
    return 0;
}

/*
TC1:
    ip:
        4 2
        -2 0 1 3
op: 2
TC2:
    ip:
        5 12
        5 1 3 4 7
op: 4
*/
