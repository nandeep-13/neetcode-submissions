class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mod=matrix[0].size();
        int power=matrix.size();
        for (int l=0,r=(mod *power)-1;l<=r;){
            int mid=(l+r)/2;
            if(target==matrix[mid/mod][mid%mod]) return true;
            else if(target>matrix[mid/mod][mid%mod]) l=mid+1; 
            else if(target<matrix[mid/mod][mid%mod]) r=mid-1;   
        }
        return false;
        
    }
};
