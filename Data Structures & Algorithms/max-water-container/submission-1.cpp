class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s=0,e=heights.size()-1;
        int maxi=0;
        while(s<e){
            int l=e-s;
            int h=min(heights[s],heights[e]);
            int ar=l*h;
            maxi=max(maxi,ar);
            if(heights[s]<heights[e])
            s++;
            else
            e--;
        }
        return maxi;
    }
};
