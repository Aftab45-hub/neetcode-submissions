class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s=0,e=heights.size()-1;
        int area=0;
        while(s<e){
            int h=min(heights[s],heights[e]);
            int w=e-s;
            area=max(area,h*w);
            if(heights[s]<heights[e]){
                s++;
            }else{
                e--;
            }
        }
        return area;
    }
};
