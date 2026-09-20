class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> m; //value, index
        int i=0;
        for(auto it: nums){
            m[it]=i;
            i++;
        }
        i=0;
         for(auto it: nums){
            if(m[target - it] && i != m[target- it]) return {i,m[target - it]};
            i++;
        }
        return {-1,-1};
    }
};
