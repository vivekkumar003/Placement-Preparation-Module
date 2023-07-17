class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int a=INT_MIN;
         int b=INT_MAX;
        int v=-1;
        for(int i=0;i<prices.size();i++){
        
            b=min(b,prices[i]);
            v=max(v,prices[i]-b);
        }
        return v;
    }
};