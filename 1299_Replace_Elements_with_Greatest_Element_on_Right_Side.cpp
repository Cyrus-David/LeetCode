class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size() - 1, max = arr[size], temp;
        
        for (int i = size - 1; i >= 0; i--) {
            temp = arr[i];
            arr[i] = max;
            if (temp > max)
                max = temp;
        }
        
        arr[size] = -1;
        
        return arr;
    }
};
