class Solution {
public:
    void reverseString(vector<char>& s) {
       int sr=0;
        int e=s.size()-1;
        while(sr<=e){
            swap(s[sr++],s[e--]);
        }
    }
};