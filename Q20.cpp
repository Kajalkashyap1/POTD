class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1, mid;
        while(e>=s)
        {
            mid=(e+s)/2;
            if(nums[mid]==target)
            return mid;
            else if(target>nums[mid])
            {
                s=mid+1;

            }
            else
            e=mid-1;