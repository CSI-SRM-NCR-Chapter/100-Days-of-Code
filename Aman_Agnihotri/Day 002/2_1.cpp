class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mymap;
        
        for(int num : nums){
            if(mymap.find(num)==mymap.end()){
                mymap[num] = 1;
            }else{
                mymap[num] += 1;
            }
        }
        
        for(map<int, int>::iterator it=mymap.begin(); it!=mymap.end(); it++){
            if(it->second==1) return it->first;
        }
        
        return -1;
    }
};