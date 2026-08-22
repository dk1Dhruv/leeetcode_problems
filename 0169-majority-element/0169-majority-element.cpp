class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int maxi = 1;
      
        sort(nums.begin(), nums.end());
          int ans = nums[0];
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                count++;
            }
            else{
                count=1;
            }
            if (count > maxi) {
                maxi = count;
                ans = nums[i];
            }
        }
        return ans;
    }
};