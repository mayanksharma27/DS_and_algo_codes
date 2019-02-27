//https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0 ) return 0;
        int incl_old,incl=nums[0],excl=0;
        for(auto it = nums.begin()+1;it!=nums.end();++it){
            incl_old =incl;
            incl = *it+ excl;
            excl = ( incl_old > excl ? incl_old : excl);
           // cout << incl << " "<<excl<<endl;
        }
    return incl > excl ? incl : excl;
    }
    
};

