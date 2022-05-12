class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l=0, r=0, res =0;
        int n = s.length();
        
        while(l<n && r<n){
            if(st.find(s[r])==st.end()){
                st.insert(s[r]);
                r++;
                res = max(res,r-l);
            }
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return res;
    }
};