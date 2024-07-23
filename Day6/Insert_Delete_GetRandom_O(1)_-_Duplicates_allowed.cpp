    // unordered_map<int,set<int>>mp;
    // vector<int>v;
    // RandomizedCollection() {
    //     mp.clear();
    //     v.clear();
    // }
    
    // bool insert(int val) {
    //     v.push_back(val);
    //     mp[val].insert(v.size()-1);
    //     if(mp[val].size()==1)return true;
    //     return false;
    // }
    
    // bool remove(int val) {
    //     if(mp.find(val)==mp.end())return false;
    //     auto it=mp.find(val);
    //     auto pos=*it->second.begin();
    //     it->second.erase(it->second.begin());
    //     v[pos]=v.back();
    //     mp[v[pos]].insert(pos);
    //     mp[v[pos]].erase(v.size()-1);
    //     v.pop_back();

    //     if(it->second.size()==0)mp.erase(val);

    //     return true;
    // }
    
    // int getRandom() {
    //     return v[rand()%v.size()];
    // }