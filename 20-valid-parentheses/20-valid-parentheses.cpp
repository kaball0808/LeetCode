class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int x;
        
        for(auto x:s){
            if(x =='(' || x =='[' || x =='{') st.push(x);
            else {
                if(st.empty() || st.top()=='(' && x !=')' || st.top() == '[' && x !=']' || st.top()=='{' && x !='}'){
                    return false;
                }
                st.pop();
            };
        }
        return st.empty();
    }
};