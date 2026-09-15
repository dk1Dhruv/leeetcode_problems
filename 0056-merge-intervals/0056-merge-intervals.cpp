class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ivt) {

        vector<vector<int>> ans;

        sort(ivt.begin(), ivt.end());

        ans.push_back(ivt[0]);

        for (int i = 1; i < ivt.size(); i++) {

            if (ivt[i][0] <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1], ivt[i][1]);
            }
            else {
                ans.push_back(ivt[i]);
            }
        }

        return ans;
    }
};