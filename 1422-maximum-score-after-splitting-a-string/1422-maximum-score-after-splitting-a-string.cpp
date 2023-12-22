class Solution {
public:
    int maxScore(string s) {
        int count=0;
        int n=s.size();
        for(auto it:s){
            if(it=='1') count++;
        }
        int count0=0;
        int ans=0;
         for(int i=0;i<n-1;i++){
            if(s[i]=='1') count--;
            else{count0++;}
            ans=max(ans,count+count0);
        }
        return ans;
    }
};