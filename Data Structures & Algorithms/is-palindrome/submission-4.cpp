class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int l=s.length();
        for(int i=0,j=l-1;i<j;i++,j--){
            while((s[i]<'a' || s[i]>'z' )&& (s[i]<'0' || s[i]>'9' )){i++;}
            while((s[j]<'a' || s[j]>'z' )&& (s[j]<'0' || s[j]>'9' )){j--;}
            if(i==j || i>j) return true;
            if(s[i]!=s[j]) return false;
        }
        return true;
    }
};
