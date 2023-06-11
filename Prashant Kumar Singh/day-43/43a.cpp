class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        stack<int> s;
        for(auto i:operations){
            if(i == "C") s.pop();
            else if(i == "D") s.push(s.top()*2);
            else if(i == "+"){
                int val1 = s.top();
                s.pop();
                int val2 = s.top();
                s.push(val1);
                s.push(val1 + val2);
            }
            else s.push(stoi(i));
        }
        while(s.size() != 0){
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};
