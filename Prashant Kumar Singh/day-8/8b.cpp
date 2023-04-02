class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a = 0;  
        int i = numbers.size() - 1;

        while (numbers[a] + numbers[i] != target)
            if (numbers[a] + numbers[i] < target)
                ++a;
            else
                --i;

        return {a+1, i+1};
    }
};
