class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            bool flag=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j&&nums[i]==nums[j]){
                    flag=0;
                    break;
                }
            }
            if(flag) {
                int x=nums[i];
                return x;
            }
        }
        return -1;
    }
};