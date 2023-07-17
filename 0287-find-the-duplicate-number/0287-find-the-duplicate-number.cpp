class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int vp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                vp=nums[i];
            }
        }
        return vp;
    }
};