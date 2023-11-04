class Solution {
public:
    
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lft = 0;
        
       
        for (int lp: left) {
            lft = max(lft, lp);
        }
        
        
        for (int rightPosition : right) {
            lft = max(lft, n - rightPosition);
        }
        
        return lft;
    }
};