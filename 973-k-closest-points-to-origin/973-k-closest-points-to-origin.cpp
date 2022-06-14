class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> maxh;
        vector<vector<int>> ans;
        
        for(int i=0;i<points.size();i++){
            int dis = points[i][0]*points[i][0]+points[i][1]*points[i][1];
            if(maxh.size()<k){
                maxh.push({dis,{points[i][0],points[i][1]}});
            }
            else{
                if(maxh.top().first>dis){
                    maxh.pop();
                    maxh.push({dis,{points[i][0],points[i][1]}});
                }
            }
        }
        
        while(k){
            ans.push_back({maxh.top().second.first,maxh.top().second.second});
            maxh.pop();
            k--;
        }
        
        return ans;
    }
};