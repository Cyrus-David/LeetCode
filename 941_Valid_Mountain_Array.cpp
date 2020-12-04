class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool down = false, up = false;
        int size = arr.size() - 1;
        
        for (int i = 0; i < size; i++) {
            if (arr[i] > arr[i + 1] ) {
                if(!up)
                    return false;
                else
                    down = true;
            } else if (arr[i] < arr[i + 1]) {
                if (down)
                    return false;
                else
                    up = true;
            } else
                return false;
        }
        
        return down && up;
    }
};
