class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> need(128, 0);
        vector<int> window(128, 0);

        // t ke characters ki frequency
        for (char c : t) {
            need[c]++;
        }

        int left = 0;
        int right = 0;

        int have = 0;
        int required = t.length();

        int minLen = INT_MAX;
        int start = 0;

        while (right < s.length()) {

            // right wala character window me add karo
            char c = s[right];
            window[c]++;

            // Agar ye character t me required tha
            // aur ab required quantity tak pahunch gaya
            if (need[c] > 0 && window[c] <= need[c]) {
                have++;
            }

            // Jab window valid ho jaye
            while (have == required) {

                // Answer update karo
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // left character remove karo
                char remove = s[left];
                window[remove]--;

                // Agar required character remove ho gaya
                if (need[remove] > 0 &&
                    window[remove] < need[remove]) {
                    have--;
                }

                left++;
            }

            right++;
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};