class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp,mp2;
       int ans=0;
        for(auto it : chars) mp[it]++;
        
        for(auto it :words){
            mp2=mp;
            int count=0;
            bool flag=true;
            for(auto iit : it){
                count++;
                 mp2[iit]--;
                 if(mp2[iit]<0){flag=false;}
            }
            if(flag){
                    ans+=count;
            }
        }
        return ans;
    }
};