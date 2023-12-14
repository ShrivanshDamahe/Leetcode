class Solution {
public:
    // [x1, y1, x2, y2]
    // (x1, y1) - bottom-left vertice of the rectangle
    // (x2, y2) - upper-right vertice of the rectangle
    
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if (rec1[2] <= rec2[0] || rec1[0] >= rec2[2] || rec1[3] <= rec2[1] || rec1[1] >= rec2[3])
            return false;
        return true;
    }
    // Time complexity - O(1)
};