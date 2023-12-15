class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> mp;
        int n=paths.size();
        for(int i=0;i<n;i++) mp[paths[i][0]]=paths[i][1];
        
        string it=mp[paths[0][0]];
        while(1){
                if(mp.find(it)!=mp.end())  it=mp[it];
                else{
                    break;
                }
        }
        return it;
    }
};