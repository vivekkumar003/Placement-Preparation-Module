class Solution {
public:
    long long int comb(int n,int r){
        long long int ans=1;
        for(int i=0;i<r;i++){
            ans=ans*(n-i);
            ans=ans/(i+1);
           
        }
         return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vp;
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                temp.push_back(comb(i,j));
            }
            vp.push_back(temp);
        }
        return vp;
    }
};