class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int st= 0, end= height.size()-1;
        while(st<end){
        int w= end-st;
            int curr= min(height[st], height[end]);
        int store = w*curr;
            maxarea= max(maxarea,store);
            height[st]<height[end] ? st++: end--;
        }
        return maxarea;
    }
};
