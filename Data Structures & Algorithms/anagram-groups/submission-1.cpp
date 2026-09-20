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
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> listOfVectors;
        for(auto it =strs.begin(); it!=strs.end();it++){
            // it is a stringif
            if(listOfVectors.size()==0){
                vector <string> temp1;
                temp1.push_back(*it);
                listOfVectors.push_back(temp1);
            }
        //     else{
        //     vector <string> vectorOfStrings=listOfVectors[0];
        // while( vectorOfStrings!=listOfVectors.end()) {
        //     while(!(isAnagram(it,vectorOfStrings[0]))){
        //     vector <string> newv;
        //     newv.push_back(it);
        //     listOfVectors.push_back(newv);
        //      vectorOfSTrings++;
        //     }
        //     }
        //     }
            else{
                int flag=0;
                for(auto it2= listOfVectors.begin();it2!=listOfVectors.end();it2++){
                    if(isAnagram(*it,(*it2)[0])) {
                        flag++;
                        it2->push_back(*it);
                    }
                }
                if (flag==0){
                    vector <string>  temp1;
                temp1.push_back(*it);
                listOfVectors.push_back(temp1);
                }
            }
        }
        return listOfVectors;
     
}




    
};
