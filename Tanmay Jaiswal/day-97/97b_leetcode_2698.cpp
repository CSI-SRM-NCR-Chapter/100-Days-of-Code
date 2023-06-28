class Solution {
public:
    int punishmentNumber(int n) {
        int res = 0;

        for (int i=1; i<=n; i++) {
            int pro = i*i;
            if (helper(i, pro)) res += pro;
            // cout << "------------------\n";
        }

        return res;
    }

    bool helper(int target, int n, int prev=0, int sum = 0, int mul = 1) {
        if (n==0) {
            // cout << target << ' ' << n << ' ' << prev << ' ' << sum << ' ' << mul << endl;
            if (sum==target) return true;
            return false;
        }
        if (prev > target) return false;
        if (sum > target) return false;

        int curr = n%10;
        int newprev = prev + curr*mul; // value after grouping with previous number

        // cout << target << ' ' << n << ' ' << prev << ' ' << sum << ' ' << mul << endl;

        bool res = helper(target, n/10, newprev, sum - prev + newprev, mul*10); // join previous group
        res |= helper(target, n/10, curr, sum + curr, 10); // form new group

        return res;
    }
};
