class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int L = 0, R = n-1;
    
        while(L<=R){
            int M = (L+R)/2;
            if (target==nums[M]) return M;
            
            //if gap is in left
            if(nums[L]>nums[M]){
                // if target is in left part
                if(target>nums[R] || target<nums[M]){
                    R = M-1;
                }
                // if target is in right part
                else{
                    L = M+1;
                }
            }
            //if gap is in right
            else{
                // if target is in right part
                if(target<nums[L] || target>nums[M]){
                    L = M+1;
                }
                // if target is in left part
                else{
                    R = M-1;
                }
            }
        }
        return -1;
    }
};