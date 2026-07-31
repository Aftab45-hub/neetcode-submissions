class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0,maxi=0,left=0;
        vector<int>freq(26,0);
        for(int right=0;right<s.size();right++){
          freq[s[right]-'A']++; 
           maxi=max(maxi,freq[s[right]-'A']);
           while((right-left+1)-maxi>k){
            freq[s[left]-'A']--;
            left++;
           }
           ans=max(ans,right-left+1);
        }
        return ans;
    }
};
