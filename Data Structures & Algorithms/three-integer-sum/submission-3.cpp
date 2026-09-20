class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        for(int i=0;i<nums.size() -2;i++){
            while(i>0 && nums[i]==nums[i-1] && i<nums.size()-2 ) i++;
            //if(i > 0 && nums[i] == nums[i-1]) continue;
            // find all j,k for i value using twosum logic and add into pairs
            for (int j=i+1, k=nums.size()-1;  j<k;  ){
                if(nums[j]+nums[k]==-nums[i]){
                    vector <int> pairs;
                    pairs.push_back(nums[i]);
                    pairs.push_back(nums[j]);
                    pairs.push_back(nums[k]);
                    triplets.push_back(pairs);
                    j++;
                    while(nums[j]==nums[j-1] && j<nums.size()-1) j++;
                    k--;
                    while(nums[k]==nums[k+1] && k>0) k--;
                }
                if(nums[j]+nums[k] < -nums[i] && j<nums.size()-1){ j++;}
                if(nums[j]+nums[k] > -nums[i] && k>0){ k--;}
            }
            
        }
        return triplets;

    }
};
