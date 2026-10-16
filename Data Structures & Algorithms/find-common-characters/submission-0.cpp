
        class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, 1000);

        for (string word : words) {
            vector<int> count(26, 0);

            for (char ch : word) {
                count[ch - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                freq[i] = min(freq[i], count[i]);
            }
        }

        vector<string> ans;

        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                ans.push_back(string(1, 'a' + i));
                freq[i]--;
            }
        }

        return ans;
    
    }
};