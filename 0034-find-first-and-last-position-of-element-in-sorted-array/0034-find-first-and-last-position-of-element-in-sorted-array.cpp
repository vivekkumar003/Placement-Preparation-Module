class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        int s=0;
        int e=n-1;
        int vp=-1,pv=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                vp=mid;
                e=mid-1;
                
            }
            
        
        }
        v.push_back(vp);
         s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                pv=mid;
                s=mid+1;
                
            }
        }
            
            v.push_back(pv);
        return v;
        /*int left=0,right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target) {return mid;}
            else if(nums[mid]<target) left =mid-1;
            else right=mid+1;
        }
        return -1;*/
    }
};