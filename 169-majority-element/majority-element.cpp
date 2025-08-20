class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> map;
        for(int x : nums){
            map[x]++;
        }
        for(auto it: map){
            if(it.second>nums.size()/2) return it.first;
        }
        return 0;
    }
};