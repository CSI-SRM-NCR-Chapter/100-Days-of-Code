class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> count;
        
        for(int e : nums){
            if(count.find(e)==count.end()){
                count[e] = 1;
            }else{
                count[e] += 1;
            }
        }
        
        for(map<int, int>::iterator it=count.begin();it!=count.end();it++){
            if(it->second > nums.size()/2){
                return it->first;
            }
        }
        
        return -1;
    }
};