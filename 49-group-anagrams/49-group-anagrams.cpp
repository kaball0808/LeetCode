class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        vector<vector<string>> ans;
        
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};
