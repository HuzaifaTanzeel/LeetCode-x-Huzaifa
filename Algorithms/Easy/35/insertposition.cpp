class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int x=target;
        int mid;
        while(high>=low){
            mid=(high+low)/2;
            if(nums[mid]==x){
                return mid;
            }
            else if(x>nums[mid]){
                low=mid+1;
            }
            else if(x<nums[mid]){
                high=mid-1;
            }
        }
        if(nums[mid]>target){
            return mid;
        }
        else{
            return mid+1;
        }
        

    }
};