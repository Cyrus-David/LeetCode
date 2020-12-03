class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
        int same = 0, size = nums.size();
        for (int i = 1; i < size; i++) {
            if (nums[i] == nums[i - 1]) same++;
            else nums[i - same] = nums[i];
        }
        return size - same;
    }
};
