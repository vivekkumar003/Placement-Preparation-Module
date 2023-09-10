class Solution {
public:
    string reverseVowels(string s) {
        int sr=0;
        int er=s.length()-1;
        string ans=s;
         while (sr < er) {
            // Check if the characters at sr and er are vowels
            if (isVowel(ans[sr]) && isVowel(ans[er])) {
                swap(ans[sr], ans[er]);
                sr++;
                er--;
            }
            // If not vowels, move the pointers accordingly
            else if (!isVowel(ans[sr])) {
                sr++;
            } else if (!isVowel(ans[er])) {
                er--;
            }
        }
        return ans;
    }
    bool isVowel(char c) {
        c = tolower(c); // Convert to lowercase to handle both uppercase and lowercase vowels
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};