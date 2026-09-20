class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans=0;
        for (int i=0;i<tokens.size();i++){
            switch (tokens[i][0]){
                    case '+':
                        ans=st.top();
                        st.pop();
                        ans+=st.top();
                        st.pop();
                        st.push(ans);
                        break;
                    case '-':
                        if (tokens[i][1]== NULL){
                            ans=st.top();
                        st.pop();
                        ans=st.top()-ans;
                        st.pop();
                        st.push(ans);}
                        else {st.push(  stoi(tokens[i]) ); }
                        break;
                    case '*':
                        ans=st.top();
                        st.pop();
                        ans=ans*st.top();
                        st.pop();
                        st.push(ans);
                        break;
                    case '/':
                        ans=st.top();
                        st.pop();
                        ans=st.top()/ans;
                        st.pop();
                        st.push(ans);
                        break;
                    default:
                        st.push(  stoi(tokens[i]) );

                        break;
            }
        }
        return st.top();
    }
};
