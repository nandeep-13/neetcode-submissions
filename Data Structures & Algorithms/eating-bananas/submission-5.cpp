class Solution {
public:
    int find_time(vector<int>& piles, int v) {
    int time = 0;

    for (int c : piles) {
        time += (c + v - 1) / v;
    }

    return time;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(), piles.end());
        int mid;
        int l=1,r=max;
        for (;l<=r;){
            mid=(l+r)/2;
            if(h>=find_time(piles,mid)) r=mid-1;
            else  l=mid+1; 
        }
        return l;
    }
};
