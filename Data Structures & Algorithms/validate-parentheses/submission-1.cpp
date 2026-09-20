#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack <char>t;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') t.push(s[i]);
            else if(s[i]==')' || s[i]==']' || s[i]=='}'){
                if(t.empty()) return false;
                else if(s[i]==')' && t.top()!='(') return false;
                else if(s[i]==']' && t.top()!='[') return false;
                else if(s[i]=='}' && t.top()!='{') return false;
                else{
                    t.pop();
                }
                
            }
        }
        if(t.empty())
        return true;
        else return false;
        //code
    }
};
