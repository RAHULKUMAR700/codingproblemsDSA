class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> mp;
        int ans=-1;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=i;
            }else{
                ans=max(i-mp[s[i]]-1,ans);
            }
        }
        if(ans<0){return -1;}
        else{
            return ans;
        }
    }
};