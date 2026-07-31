class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int s = 0; s < (int)nums.size() - 2; s++) {
            if (s > 0 && nums[s] == nums[s-1]) continue;
            int i = s + 1, e = nums.size() - 1;
            while(i < e){
                int k = nums[s] + nums[i] + nums[e];
                if(k == 0){
                   ans.push_back({nums[s], nums[i], nums[e]});
                   while (i < e && nums[i] == nums[i+1]) i++;
                   while (i < e && nums[e] == nums[e-1]) e--;
                   i++;
                   e--;
                } else if(k < 0){
                  i++;
                } else {
                    e--;
                }
            }
        }
        return ans;
    }
};
