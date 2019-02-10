// This is a solution to https://www.hackerrank.com/challenges/max-array-sum/problem

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maxSubsetSum function below.
int maxSubsetSum(vector<int> arr) {
    vector<int> dp;
    int i,max,s1,s2;
    dp.push_back(arr[0]);
    dp.push_back(arr[1]);
  //  cout<<arr[0]<<" "<<arr[1]<<"bla"<<endl;
    for(i=2;i<arr.size();i++){
        max = arr[i];
        if(i-2>=0){
            s1 = dp[i-2] + arr[i];
            max = dp[i-2] > max ? dp[i-2] : max ;
            max =  s1 > max ? s1 : max ;            
        }
        if(i-3>=0){
            s2 = dp[i-3] + arr[i];
            max = dp[i-3] > max ? dp[i-3] : max ;
            max =  s2 > max ? s2 : max ;            
        }
       dp.push_back(max);
    }
     
    return dp[dp.size()-1] > dp[dp.size()-2] ? dp[dp.size()-1] : dp[dp.size()-2];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = maxSubsetSum(arr);

    fout << res << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
