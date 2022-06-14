class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto [a,b] : mp){
            pq.push({b,a});
        }
        
        vector<int> ans;
        while(k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};