class Solution {
public:
bool check(string &sub,string &t){
    unordered_map<char,int>mp;
     for(char ch:sub)
     mp[ch]++;

     for(char ch:t){
        if(mp[ch]==0)
        return false;
        mp[ch]--;
     }
     return true;

}
    string minWindow(string s, string t) {
       int n=s.size();
       int mini=INT_MIN;
       string ans="";
       for(int i=0;i<n;i++){
         string sub="";
         for(int j=i;j<n;j++){
            sub+=s[j];
            if(check(sub,t)){
                if(sub.size()<mini){
                mini=sub.size();
                ans=sub;
                }
                break;
            }
         }
       }
        return ans;
    }
};
