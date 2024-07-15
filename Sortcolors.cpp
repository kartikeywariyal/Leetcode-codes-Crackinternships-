class Solution {
public:
    void sortColors(vector<int>& nums) {
        // used two pointer approach to sort it 
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            while (nums[l] == 0 and l < r)
                l++;
            while (nums[r] != 0 and r > l)
                r--;
            swap(nums[l], nums[r]);
        }
        r = nums.size() - 1;

        while (l < r) {
            while (nums[l] == 1 and l < r)
                l++;
            while (nums[r] == 2 and r > l)
                r--;
            swap(nums[l], nums[r]);
        }
    }
};
