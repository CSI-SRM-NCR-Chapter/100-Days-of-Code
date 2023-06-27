class Solution {
public:
    bool check(int index, string &p, int target){
        if (index == p.size()){
            if (target == 0) return true;
            else return false;
        }

        if (target < 0) return false;
        for (int i = index; i < p.size(); ++i){
            string x = p.substr(index, i + 1 - index);
            int y = stoi(x);
            if (check(i + 1, p, target - y)) return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        long long res = 0;
        for (long long i = 1; i <= n; ++i){
            long long x = i * i;
            string p = to_string(x);
            if (check(0, p, i)) res += (i * i);
        }
        return res;
    }
};
