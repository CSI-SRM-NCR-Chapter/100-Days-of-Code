class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if (s==t) return 1;
        return 0;
    }
}; //Day 6.1

class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num)
        {
            sum += num%10;
            num /= 10;
        }
        if(sum/10 != 0) sum = addDigits(sum);
        return sum;
    }
}; //Day 6.2