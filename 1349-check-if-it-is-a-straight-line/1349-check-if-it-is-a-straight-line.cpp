class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() <= 2) {
            return true;
        }
        
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        
        if (x1 - x0 == 0) {
            for (int i = 2; i < coordinates.size(); i++) {
                int xi = coordinates[i][0];
                if (xi != x0) {
                    return false;
                }
            }
        } else {
            double slope = static_cast<double>(y1 - y0) / (x1 - x0);
            for (int i = 2; i < coordinates.size(); i++) {
                int xi = coordinates[i][0];
                int yi = coordinates[i][1];
                if (static_cast<double>(yi - y0) / (xi - x0) != slope) {
                    return false;
                }
            }
        }
        
        return true;
    }
};
