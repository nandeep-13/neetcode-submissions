class Solution {
public:
    
    int areas (int l, int r,vector<int>& h){
        return min(h[l],h[r])*(r-l);
    }
    int maxArea(vector<int>& heights) {
        int l=0,r=1;
        for(int j=1;j<heights.size() && l<r; j++){
            if(areas(l,r,heights) < areas(l,j,heights)){
                r=j;
                for(int i=l;i<j;i++){
                    if(areas(l,r,heights) < areas(i,j,heights)){ l=i;}
                }
            }
        }
        //rest code
        return areas(l,r,heights);
    }
};
