class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz=flowerbed.size();
        for(int i=0; i<sz; i++){
            if(flowerbed[i]==0){
                if((i==0 or flowerbed[i-1]==0) and (i==sz-1 or flowerbed[i+1]==0)){
                    flowerbed[i]=1;
                    n--;
                }
            }
        }
        return n<=0;
    }
};
