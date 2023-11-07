class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int k=0;int n=dist.size();
        vector<float> arr(n,0);
        for(int i=0;i<n;i++){
            arr[i]=(float)dist[i]/(float)speed[i];
        }
         sort(arr.begin(),arr.end());
         for(auto it:arr){
             cout<<it<<" ";
         }
         for(int i=0;i<n;i++){
           
            if(arr[i]<=i){
                return k;
            }
            else{
                k++;
            }
        }
       

        return k;
    }
};