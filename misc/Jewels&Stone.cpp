//https://leetcode.com/problems/jewels-and-stones
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i,count=0;
        set<char> s;
        for(i=0;i<J.length();i++){
            s.insert(J[i]);
        }
        for(i=0;i<S.length();i++){
            if(s.find(S[i]) != s.end()){
                count++;
            }
        }
        return count;
    }
};
