class RandomizedSet {
public:
    vector<int> temp;
    unordered_map<int,int> mp;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) return false;
        else {
            temp.push_back(val);
            mp[val]=temp.size()-1;    //mp<val,index>
            return true;
        }
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()) return false;
        else {
            int last = temp.back();
            temp[mp[val]]=temp.back(); //replace delete target with last int
            temp.pop_back(); //delete last int
            mp[last]=mp[val]; //update index save in mp
            mp.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        return temp[rand()%temp.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */