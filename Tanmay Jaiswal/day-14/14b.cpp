
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(begin(people), end(people), sortbysec);
        int n = people.size();

        for(int i=0; i<n; i++) {
            int j = 0, c=0, idx = -1;
            
            while (j<i) {
                if (people[j][0] >= people[i][0]) c++;
                if (c>people[i][1]) {idx = j; break;}
                j++;
            }

            for (j=idx; j<i and idx!=-1; j++) {
                swap(people[j], people[i]);
            }
        }

        return people;
    }
    
    static bool sortbysec(const vector<int>& a, const vector<int>& b) {
        if (a[1] == b[1]) return a[0] < b[0];
        return a[1] < b[1];
    }

};
