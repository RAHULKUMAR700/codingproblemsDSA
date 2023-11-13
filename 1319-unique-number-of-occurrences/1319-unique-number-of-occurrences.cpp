class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp,mp2;
        set<int> st;
        for(auto it:arr)
        { 
            mp[it]++;
            st.insert(it);
        }
        for(auto it:st){
            if(mp2[mp[it]]==0) mp2[mp[it]]++;
            else{
                return false;
            }
        }
       return true;
    }
};