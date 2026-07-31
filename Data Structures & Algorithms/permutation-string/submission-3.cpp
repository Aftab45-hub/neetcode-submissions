class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m)
        return false;

        vector<int>cnt1(26,0);
        vector<int>cnt2(26,0);
        int i=0;
        while(i<n){
         cnt1[s1[i]-'a']++;
         cnt2[s2[i]-'a']++;
         i++;
        }
        if(cnt1==cnt2)
        return true;

        int left=0,right=n;
        while(right<m){
            cnt2[s2[left]-'a']--;
            cnt2[s2[right]-'a']++;
            if(cnt1==cnt2)
            return true;
            left++;
            right++;
        }
        return false;
    }
};