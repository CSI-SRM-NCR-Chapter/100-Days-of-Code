class Solution {
public:
    bool isPerfectSquare(int num) {
      if(num == 1) return true;
        int left = 0;
        int right = num;
        while(left <= right){
          double mid = left + (right - left) / 2;
          if(mid == num / mid) return true;
          if(mid > num / mid) right = mid - 1;
          else left = mid + 1;
        }
        return false;
    }
};
