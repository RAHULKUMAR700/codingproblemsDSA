class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
     vector<bool> ans;
    int n=nums.size();
    int m=l.size();
    for(int i=0;i<m;i++){
       vector<int> temp;
       for(int j=l[i];j<=r[i];j++){
           temp.push_back(nums[j]);
       }
       sort(temp.begin(),temp.end());
       bool flag=true;
       for(int j=1;j<temp.size();j++){
           if(temp[j]-temp[j-1]!=temp[1]-temp[0]){
                flag=false;
                break;
           }
       }
       ans.push_back(flag);
    }
     return ans;
    }
};