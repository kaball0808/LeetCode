class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i = 0;i<n;i++){
            
            if(nums[i]>0) break;
            
            if(i>0 and nums[i-1]==nums[i]) continue;
            
            int L = i+1;
            int R = n-1;
            
            while(L<R){
                int sum = nums[i]+nums[L]+nums[R];
                if(sum>0){
                    R--;
                }
                else if(sum<0) {
                    L++;
                }
                else{
                    result.push_back({nums[i],nums[L],nums[R]});
                    while(L<R&&nums[L+1]==nums[L])L++;
                    while(L<R&&nums[R-1]==nums[R])R--;
                    L++;
                    R--;
                }
            }
            
        }
        return result;
    }
};