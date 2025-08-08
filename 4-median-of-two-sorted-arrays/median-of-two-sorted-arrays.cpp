class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for(int x:nums1){
            nums.push_back(x);

        }
        for(int x:nums2){
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
        if(nums.size()%2!=0){
            return nums[nums.size()/2];
        }
        else {
        return (nums[nums.size()/2]+nums[(nums.size()/2)-1])/2.0;
        
        }
    }
};