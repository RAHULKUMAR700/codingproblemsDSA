class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> onesrow(m,0),onescol(n,0),zerosrow(m,0),zeroscol(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    onesrow[i]++;
                    onescol[j]++;
                }
                else if(grid[i][j]==0){
                    zerosrow[i]++;
                    zeroscol[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=onesrow[i] + onescol[j] - zerosrow[i] - zeroscol[j];
            }
        }
        return grid;
    }
};