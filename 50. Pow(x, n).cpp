class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long nn = n; // casting n to long to handle edge case where n = INT_MIN
        if (nn < 0) {
            x = 1.0 / x;
            nn = -nn;
        }
        while (nn > 0) {
            if (nn % 2 == 1) {
                ans *= x;
            }
            x *= x;
            nn /= 2;
        }
        return ans;
    }
};
