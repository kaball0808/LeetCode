class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> answer(n);
        vector <int> prefix(n);
        vector <int> postfix(n);
        
        prefix[0]=1;
        for(int i = 1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        
        postfix[n-1]=1;
        for(int j = n-2;j>=0;j--){
            postfix[j]=postfix[j+1]*nums[j+1];
        }
        
        for(int k = 0;k<n;k++){
            answer[k]=prefix[k]*postfix[k];
        }
        return answer;
        
    }
};

    