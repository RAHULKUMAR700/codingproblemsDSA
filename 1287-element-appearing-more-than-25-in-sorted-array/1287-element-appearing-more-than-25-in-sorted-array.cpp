class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
            if(4*mp[it]>arr.size()) return it;
        }
        return -1;
    }
};