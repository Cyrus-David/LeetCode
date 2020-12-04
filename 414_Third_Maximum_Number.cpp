class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int size = nums.size();
        if (size < 3)
            return max(nums[1], nums[0]);
        
        long max1, max2, max3;
        max1 = max2 = max3 = LONG_MIN;
        
        for (auto n : nums) {
            if (n > max1) {
                max3 = max2;
                max2 = max1;
                max1 = n;
            } else if (max2 < n && n != max1) {
                max3 = max2;
                max2 = n;
            } else if (max3 < n && n != max2 && n != max1) {
                max3 = n;
            }
        }

        if (max3 == LONG_MIN)
            return max1;
        return max3;
    }
};
