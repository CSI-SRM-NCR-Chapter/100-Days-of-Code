 class Solution {
public:

    // Encodes a URL to a shortened URL.
    int coded_value=256;
    unordered_map<string,string>mp;
    string encode(string longUrl) {
        string res="http://tinyurl.com/"+to_string(coded_value);
        coded_value++;
        mp[res]=longUrl;
        return res;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
        
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
