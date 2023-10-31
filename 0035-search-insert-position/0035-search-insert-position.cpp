class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0,en=nums.size()-1,mid=(st+en)/2;
        
        while(st<=en){
            mid=(st+en)/2;
            if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            en=mid-1;
        }
        else if(nums[mid]<target){
            st=mid+1;
        }

        }
        if(nums[mid]<target){
            return mid+1;
        }
        else{ return mid;}
    }
};