class Solution {
public:
    unordered_map<long long int,long long int>mp;
    
    int trailingZeroes(int n) {
        for(int i=n;i>=1;i--) fun(i);
		return min(mp[2],mp[5]); 
    }

    void fun(int n) {
        for(int i=2;i*i<=n;i++) {
            while((n%i) == 0) {
         	    mp[i]++;
				n = n / i;	
			}
		}

		if(n > 1) mp[n]++;
    }
};
