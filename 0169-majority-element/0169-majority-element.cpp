class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n=nums.size();
        int v=0;
        map<int,int>m;
        for(int i=0;i<n;i++){
            m.insert({nums[i],m[nums[i]]++});
        }
        for(auto & it:m){
            if(it.second>n/2){
                    v=it.first;
            }
        }
        return v;
    }
};