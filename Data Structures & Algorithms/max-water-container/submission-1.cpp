class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ptr1 = 0;
        int ptr2 = heights.size()-1;
        int max_area = 0;
        int min_height = 0;
        while(ptr1 < ptr2){
            min_height = min(heights[ptr1], heights[ptr2]);
            max_area = max(max_area, min_height * (ptr2-ptr1));
            if(heights[ptr1] < heights[ptr2]) {
                ptr1++;
            }
            else{
                ptr2--;
            }
        }
        return max_area;
    }
};
