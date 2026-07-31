class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
         for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int s=0,e=ans.size()-1;
        int mid=s+(e-s)/2;
        if(ans.size()%2==0){
            double sum=(ans[mid]+ans[mid+1])/2;
             return sum;
        }else{
            return ans[mid];
        }
    }
};
