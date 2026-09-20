class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> ind;
        int l=0, r=numbers.size()-1;   
        // define l ind[0];
        // define r ind[1];
        while(l!=r){
            if(numbers[l]+numbers[r] == target) {break;}
            else if (numbers[l]+numbers[r] < target){ l++;}
            else r--;
        }
        ind.push_back(l+1);
        ind.push_back(r+1);
        if(numbers[l]+numbers[r] != target) return {-1,-1};
        return ind;
    }
};
