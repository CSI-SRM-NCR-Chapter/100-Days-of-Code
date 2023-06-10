class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(begin(arr), end(arr));
        int d=abs(arr[0]-arr[1]);
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]!=(arr[0]+i*d)) return false;
        }
        return true;
    }
};
