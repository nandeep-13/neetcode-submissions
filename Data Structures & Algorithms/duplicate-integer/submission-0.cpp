class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> m;
        for(auto it : nums){
            if(m[it]==1) return true;
            m[it]=1;
        }
        return false;
    }
};