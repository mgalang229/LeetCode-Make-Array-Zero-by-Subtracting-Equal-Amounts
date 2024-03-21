class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        while (true) {
            bool all_zeroes = true;
            for (int& x : nums) {
                all_zeroes &= (x == 0);
            }
            if (all_zeroes) {
                break;
            }
            int mn = INT_MAX;
            for (int& x : nums) {
                if (x > 0) {
                    mn = min(mn, x);
                }
            }
            for (int& x : nums) {
                if (x > 0) {
                    x -= mn;
                }
            }
            cnt++;
        }
        return cnt;
    }
};
