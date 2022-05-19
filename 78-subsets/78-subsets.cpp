class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> subsets(vector<int> nums) {
        vector<int> curr={};
        backtrack(0,nums,curr);
        return ans;
    }
    
    void backtrack(int index, vector<int> nums, vector<int> curr){
        if(index>=nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        backtrack(index+1,nums,curr);
        curr.pop_back();
        backtrack(index+1,nums,curr);
    }
};