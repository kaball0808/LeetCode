class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        if(ransomNote.size()>magazine.size()) return false;
        for(char x : magazine){
            mp[x]++;
        }
        for(char x: ransomNote){
            mp[x]--;
            if(mp[x]<0){
                return false;
            }
        }
        return true;
    }
};