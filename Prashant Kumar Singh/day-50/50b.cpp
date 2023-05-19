class Solution {
public:
    std::vector<double> available_nums;
    bool bt() {
        if (available_nums.size() == 1) {
            auto v = available_nums.back();
            return abs(v - 24.) < .01;
        }
        for (size_t i = 0; i < available_nums.size(); ++i) {
            for (size_t j = i + 1; j < available_nums.size(); j++)
            {
                auto op1 = available_nums[i];
                auto op2 = available_nums[j];
                available_nums.erase(available_nums.begin() + j);
                available_nums.erase(available_nums.begin() + i);
                auto bt_help = [&](double curr) {
                    available_nums.push_back(curr);
                    if (bt()) return true;
                    available_nums.pop_back();
                    return false;
                };
                if (bt_help(op1 + op2)) return true;
                if (bt_help(op1 - op2)) return true;
                if (bt_help(op2 - op1)) return true;
                if (bt_help(op1 / op2)) return true;
                if (bt_help(op2 / op1)) return true;
                if (bt_help(op2 * op1)) return true;
                available_nums.insert(available_nums.begin() + i, op1);
                available_nums.insert(available_nums.begin() + j, op2);
            }
        }
        return false;
    }
    bool judgePoint24(vector<int>& cards) {
        for (const auto card : cards) {
            available_nums.push_back(card);
        }
        return bt();
    }
};
