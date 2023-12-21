class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
        arr.push_back(points[i][0]);
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,arr[i]-arr[i-1]);
        }
        return ans;
    }
};