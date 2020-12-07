class Solution {
public:
    bool checkValidString(string s) {
        int right = 0, left = 0;
        
        for (auto a : s) {
            right += (a == '(' || a == '*') ? 1 : -1;
            left += (a == ')' || a == '*') ? -1 : 1;
            if (right < 0)
                return 0;
            left = max(0, left);
        }
        
        return 0 == left;
    }
};
