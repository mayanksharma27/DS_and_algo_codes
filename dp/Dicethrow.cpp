//Dice Throw 
#include <bits/stdc++.h>
using namespace std;

int getways(int m, int n,int sum){
    int i,j,k;
    int dp[n+1][sum+1]={0};
    for(i=1;i<=m && i<=sum;i++)dp[1][i]=1;
    for(i=2;i<=n;i++){
        for(j=1;j<=sum;j++){
            k=1;
            while(k<=j && k<=m){
                dp[i][j]+=dp[i-1][j-k];
                k++;
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    cout << getways(4, 2, 1) << endl; 
    cout << getways(2, 2, 3) << endl; 
    cout << getways(6, 3, 8) << endl; 
    cout << getways(4, 2, 5) << endl; 
    cout << getways(4, 3, 5) << endl; 
  
    return 0;
}
