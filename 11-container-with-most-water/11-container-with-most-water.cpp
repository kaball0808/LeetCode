class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int L = 0, R = n-1;
        int volume=INT_MIN;
        while(L<R){
            int temp = min(height[L],height[R])*(R-L);
            volume = max(temp,volume);
            if(height[R]>height[L]) L++;
            else R--;
        }

        return volume;
    }
};