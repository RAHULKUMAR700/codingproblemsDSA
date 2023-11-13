class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        // if(n==k){
        //     for(auto it:nums) sum+=it;
        //          return (double)sum/k;
        // }
        
        int avg=0;
        int i=0,j;
        for(j=0;j<k;j++){
            sum+=nums[j];
            //cout<<sum<<"."<<endl;
        }
        avg=sum;
        while(j<n){
            sum+=nums[j];
            sum-=nums[i];
           // cout<<sum<<endl;
            i++;
            j++;
            avg=max(avg,sum);
            //cout<<avg<<"<-"<<endl;
        }
           return (double)avg/k;
    }
};