//solution to https://www.hackerrank.com/challenges/candies/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
    vector<int> dp(arr.size(),0);
    long i,sum=0;
    dp[0]=1;
    for(i=1;i<arr.size();i++){
        dp[i] = arr[i]>arr[i-1] ? dp[i-1]+1 : 1;
    }
    for(i=arr.size()-2;i>=0;i--){
        dp[i] = arr[i]>arr[i+1] ? max(dp[i+1]+1,dp[i]) : dp[i];
    }
    for(i=0;i<arr.size();i++){
        cout<<dp[i]<<" ";
        sum+=dp[i];
    }
    return sum;

    //2 4 2 6 1 7 8 9 2 1
    //1 2 1 2 1 2 3 4 2 1
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
