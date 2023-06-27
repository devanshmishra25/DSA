class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;

        string check = s + s;

        if (check.find(goal) != string::npos) {
            // The goal string is found in the check string
            return true;
        } else {
            // The goal string is not found in the check string
            return false;
        }
    }
};
