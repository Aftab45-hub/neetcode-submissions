class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>st;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
            st.push_back(tolower(s[i]));
            }
        }
         int i=0,l=st.size()-1;
         while(i<l){
            if(st[i]==st[l]){
                i++;
                l--;
            }else{
                return false;
            }
         }
         return true;
    }
};
