class Solution {
    int stringtointeger(string s){
        int k=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='1') k=1+k*2;
           else   k=0+k*2;
        }
        cout<<k<<"..";
        return k;
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<int> st;
        for(auto it:nums){
            st.insert(stringtointeger(it));
        }
        int n=pow(2,nums[0].size())-1;
        int t;
        for(int i=0;i<=n;i++){
            if(st.find(i)==st.end()){
                t=i;
                break;
            }
        }
        string s;

        while(t>0){
            if(t%2) s='1'+s;
            else    s='0'+s;
            
            t/=2;
        }
        if(s.size()<nums[0].size()){
            for(int i=s.size();i<nums[0].size();i++){
                s='0'+s;
            }
        }
        return s;
    }
};