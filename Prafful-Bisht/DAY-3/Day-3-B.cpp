class Solution {
public:
    bool isPalindrome(int x) {
    long long int rev=0;
	int dup=x;
	while(dup>0){
		int lg=dup%10;
		rev = rev*10 + lg;
		dup=dup/10;
	}
    if(x==rev){
        return true;
    }
    else{
        return false;
    }
    }
};