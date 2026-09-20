class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> table;
        // pair <int,int> topk[k];
        // for(int i=0;i<k;i++){
        //     topk[i].first=-1;
        //     topk[i].second=-1;
        // }
        for(auto it: nums){
            table[it]++;
        }
        // for(int i=0;i<k;i++){
        //     int high=-1;
        //     for (auto it: table){
        //         if (table.second>high){
        //             topk[i].first=it.first;
        //             topk[i].second=it.second;
        //         }

        //    }
           
        // }
        priority_queue <pair<int,int>> pq;

        for(auto it: table){
            pq.push({it.second,it.first});
        }
        vector <int> soln;
        for(int i=0;i<k;i++){
            soln.push_back(pq.top().second);
            pq.pop();
        }
    return soln;



    }
};
