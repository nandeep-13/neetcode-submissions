class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack <int> st;
        vector <int> result;
        for(int i =0;i<t.size();i++){
            result.push_back(0);
        }
        for(int i =0;i<t.size();i++){
            if(st.empty()){
                st.push(i);
            }
            else{
                while (!st.empty() && t[i]>t[st.top()]){
                    result[st.top()]=i-st.top();
                    st.pop();
                    
                }
                st.push(i);
            }

        }
        return result; 
    }
};
