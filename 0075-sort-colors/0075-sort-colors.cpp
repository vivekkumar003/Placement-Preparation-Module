class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                swap(nums[start],nums[i]);
                start++;
            }
        }
        for(int i=start;i<nums.size();i++){
            if(nums[i]==1){
                swap(nums[start],nums[i]);
                start++;
            }
        }
    }
};