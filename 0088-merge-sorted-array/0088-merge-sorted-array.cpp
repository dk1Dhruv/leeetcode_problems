class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        vector<int> ans;

        ans.insert(ans.end(), v1.begin(), v1.begin() + m );
        ans.insert(ans.end(), v2.begin(), v2.begin() + n);
        sort(ans.begin(), ans.end());
         for (int i = 0; i < m + n; i++) {
            v1[i] = ans[i];
        }
    }
};