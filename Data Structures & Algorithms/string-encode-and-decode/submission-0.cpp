class Solution {
public:

    string encode(vector<string>& strs) {

        string ans = "";

        for (string st : strs) {
            ans += to_string(st.size()) + "#" + st;
        }

        return ans;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            // Find '#'
            while (s[j] != '#') {
                j++;
            }

            // Length of current string
            int len = stoi(s.substr(i, j - i));

            // Extract the string
            string word = s.substr(j + 1, len);

            ans.push_back(word);

            // Move to next encoded string
            i = j + 1 + len;
        }

        return ans;
    }
};
