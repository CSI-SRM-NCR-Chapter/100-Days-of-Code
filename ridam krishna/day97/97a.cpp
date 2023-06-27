class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> st;
        vector<int> res;
        int n=A.size();
        int count=0;

        for(int i=0; i<n; i++){
            st.insert(B[i]);
            for(int j=0; j<=i; j++){
                if(st.find(A[j])!=st.end()) count++;
            }
            res.push_back(count);
            count=0;
        }
        return res;
    }
};
