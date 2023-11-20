class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        unordered_map<char,int> mp;
        for(auto it:garbage){
            for(auto iit:it){
                mp[iit]++;
            }
        }
        int ans=0;
        int n=garbage.size();
       //for metal garbage
        for(int i=0;i<n;i++){
            for(auto it:garbage[i]){
                if(it=='M'){
                    ans+=1;
                    mp['M']--;
                }
            }
            if(mp['M']>0) ans+=travel[i];
            else{break;} 
        }
       //for paper garbage
        for(int i=0;i<n;i++){
            for(auto it:garbage[i]){
                if(it=='P'){
                    ans+=1;
                    mp['P']--;
                }
            }
            if(mp['P']>0) ans+=travel[i];
            else{break;} 
        }
       //for glass garbage 
        for(int i=0;i<n;i++){
            for(auto it:garbage[i]){
                if(it=='G'){
                    ans+=1;
                    mp['G']--;
                }
            }
            if(mp['G']>0) ans+=travel[i];
            else{break;} 
        }
        return ans;
    }
};