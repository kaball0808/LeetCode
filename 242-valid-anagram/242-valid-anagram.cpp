class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        if(s==t) return true;
        if(s.size()!=t.size())return false;
        
        for(char a:s){
            mp[a]++;
        }
        for(char a:t){
            mp[a]--;
            if(mp[a]<0) return false;
        }
        return true;
    }
};