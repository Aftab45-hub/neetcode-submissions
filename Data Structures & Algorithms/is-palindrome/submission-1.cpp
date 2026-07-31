class Solution {
public:
    bool isPalindrome(string s) {
       vector<char>st;
       for(int i=0;i<s.size();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
            st.push_back(tolower(s[i]));
        }
       }
       int str=0,end=st.size()-1;
       while(str<end){
        if(st[str]==st[end]){
            str++;
            end--;
        }else{
            return false;
        }
       }
       return true; 
    }
};
