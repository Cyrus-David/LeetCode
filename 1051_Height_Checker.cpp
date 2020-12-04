class Solution {
public:
    int heightChecker(vector<int>& h) {
        int cnt = 0, size = h.size();
        vector<int> copy = h;
        
        sort(copy.begin(), copy.end());
        
        for (int i = 0; i < size; i++) {
            if (h[i] != copy[i])
                cnt++;
        }
        
        return cnt;
    }
};
