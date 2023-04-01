class Solution {
private:
    int binarySearch(vector<int> num, int s, int e, int key){
        int mid = s+((e-s)/2);
        while(s<=e){
            if(num[mid]==key){
                return mid;
            }
            else if(num[mid]>key){
                // cout<<"Go left"<<endl;
                return binarySearch(num, s, mid-1, key);
            }
            else{
                // cout<<"Go right"<<endl;
                return binarySearch(num, mid+1, e, key);
            }
        }
        return -1;
    }
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = numbers.size();
        int temp;
        vector<int> ans;
        int num = INT_MAX;
        for(int i = 1; i<l; i++){
            if(numbers[i-1]==num){
                continue;
            }
            num=numbers[i-1];
            temp = binarySearch(numbers, i, l-1, target-num);
            // cout<<target<<"-"<<numbers[i-1]<<" "<<temp<<endl;
            if(temp != -1){
                ans.push_back(i);
                ans.push_back(temp+1);
                return ans;
            }
        }
        return ans;
    }
};
