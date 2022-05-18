class Solution {
public:
    vector<string> ans;
    
    void fool(string st,int L,int R){
        if(L==0&&R==0){
            ans.push_back(st);
            return;
        }
        else{
            if(L>0) fool(st+"(",L-1,R);
            if(R>L) fool(st+")",L,R-1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        fool("",n,n);
        return ans;
    }
};