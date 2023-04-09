class Solution {
private:
    vector<vector<string>> result;
   
    bool isPalindrome(string prefix) {
        int start = 0;
        int end = prefix.size() - 1;

        while(start <= end) {
            if(prefix[start] != prefix[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
            
    }
    
    void findPalindromicPartitions(string s, vector<string> partition) {
         if (s.size() == 0) {
             result.push_back(partition);
             return;
         }   
        
        for(int i = 0; i < s.size(); i++) {
            string prefix = s.substr(0, i + 1);
            if(isPalindrome(prefix)) {
                int start = i + 1;
                int end = s.size() - 1;
                int size = end - start + 1;
                string remaining = s.substr(i + 1, size);
                partition.push_back(prefix);
                findPalindromicPartitions(remaining, partition);
                partition.pop_back();
            }
        }        
    }
    
public:
    vector<vector<string>> partition(string s) {
        if (s.size() == 0) {
            return result;
        }

        vector<string> partition;
        findPalindromicPartitions(s, partition);
        return result;
    }
};

