//https://leetcode.com/problems/to-lower-case
class Solution {
public:
    string toLowerCase(string str) {
        int i;
        for(i=0;i<str.length();i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i] = (char)(str[i]-'A'+'a');
            }
        }
        return str;
    }
};
