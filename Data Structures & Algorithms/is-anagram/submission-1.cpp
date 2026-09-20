class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> m1,m2;
        for(auto it: s){
            m1[it]++;
        }
        for(auto it: t){
            m2[it]++;
        }
        if( s.size()!=t.size() ) return false;
        for(auto it: m1){
            
            if (m2[it.first]!=it.second) return false;
        }
        // for(auto it: m2){
           
        //     if (m1[it.first]!=it.second) return false;
        // }
        
        return true;
    }
};
