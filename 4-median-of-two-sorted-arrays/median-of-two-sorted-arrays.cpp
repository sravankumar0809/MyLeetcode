class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums1.at(i));
        }
          for(int i=0;i<m;i++){
            nums.push_back(nums2.at(i));
        }
        sort(nums.begin(),nums.end());
        double ans;
        int newsize = m+n;
        if(newsize%2!=0){
            ans=nums[newsize/2];
            return ans;
        }
        else {
        ans = (nums[newsize/2]+nums[(newsize/2)-1])/2.0;
        return ans;
        }
    }
};