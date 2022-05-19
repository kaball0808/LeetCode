class Solution {
public:
    vector<string> ans;
    //setup hash table
    unordered_map<int, string> mp = {
        {2,"abc"},
        {3,"def"},
        {4,"ghi"},
        {5,"jkl"},
        {6,"mno"},
        {7,"pqrs"},
        {8,"tuv"},
        {9,"wxyz"}
    };
    
    vector<string> letterCombinations(string digits) {
        if(digits=="") return ans;
        string temp="";
        backtracking(digits,temp,0);
        return ans;
    }
    
    //backtracking
    void backtracking(string digits, string temp, int i){
        if(i==digits.size()){
            ans.push_back(temp);
            return;
        } 

        for(auto x:mp[digits[i]-'0']){
            temp.push_back(x);
            backtracking(digits,temp,i+1);
            temp.pop_back();
        }
        return;
    }
};