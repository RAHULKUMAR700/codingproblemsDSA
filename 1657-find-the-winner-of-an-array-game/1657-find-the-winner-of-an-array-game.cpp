class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        int maxi=arr[0];
        unordered_map<int,int> mp;
        for(int i=1;i<=1000000;i++){
                maxi=max(maxi,arr[i%n]);
                  mp[maxi]++;
                  if(mp[maxi]==k){
                      break;
                  }       
        }
        return maxi;
    }
};