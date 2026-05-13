class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];

        int st = 0, end = nums.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            if (mid % 2 == 1) mid--;  // make mid even

            if (nums[mid] == nums[mid + 1]) {
                st = mid + 2;
            } else {
                end = mid;
            }
        }
        return nums[st];
    }
};
