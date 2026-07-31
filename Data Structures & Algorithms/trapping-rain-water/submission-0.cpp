class Solution {
public:
    int trap(vector<int>& height) {
        int s=0,e=height.size()-1;
        int leftmax=0,rightmax=0;
        int water=0;
        while(s<e){
         if(height[s]<height[e]){
            if(height[s]>=leftmax)
            leftmax=height[s];
            else
            water+=leftmax-height[s];

            s++;
         }else{
            if(height[e]>=rightmax)
            rightmax=height[e];
            else
            water+=rightmax-height[e];

            e--;
         }
        }
        return water;
    }
};
