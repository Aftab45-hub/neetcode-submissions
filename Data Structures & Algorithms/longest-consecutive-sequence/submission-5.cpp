class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int cnt=1;
        // if(nums.size()==0){
        //     return 0;
        // }
        
        // int maxi=1;
        // for(int i=1;i<nums.size();i++){
        //      if(nums[i]==nums[i-1]){
        //      continue;
        //      }
        //      if(nums[i]==nums[i-1]+1){
        //      cnt++;
        //     }else{
        //         cnt=1;
        //     }
        //     maxi=max(maxi,cnt);
        // }
        // return maxi;
        unordered_set<int>st;
        int longest=0;
        for(int s:nums){
            st.insert(s);
        }
        for(int num:nums){
            if(st.find(num-1)==st.end()){
                int curr=num;
                int cnt=1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    cnt++;
                }
                 longest=max(longest,cnt);
            }
        }
        return longest;
    }
};

