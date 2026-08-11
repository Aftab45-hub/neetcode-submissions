class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int>st;
     for(int num:nums){
     st.insert(num);
     }
     int longs=0;
     for(int num:nums){
        if(st.find(num-1)==st.end()){
        int curr=num;
        int cnt=1;
        while(st.find(curr+1)!=st.end()){
            curr++;
            cnt++;
        }
        longs=max(longs,cnt);
     }  
     }
     return longs;
    }
};
