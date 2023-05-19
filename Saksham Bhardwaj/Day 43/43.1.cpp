class Solution {
public:
    int calPoints(vector<string>& operations);

    bool isNumber(string line, int &n);
};
/*************************************************************/
int Solution::calPoints(vector<string>& operations) {
    int i, size = operations.size(), n;
    char *p;
    vector<int> v;
    for (i = 0; i < size; ++i) {
    
        if (isNumber(operations[i], n) == true) {
           v.push_back(n);
       } else if (operations[i] == "+") {
           v.push_back( v[v.size()-1] + v[v.size()-2] );
       } else if (operations[i] == "D") {
           v.push_back( 2*v[v.size()-1]);
       } else {
           v.pop_back();
       }
    }
    size = v.size();
    for (i = 0, n = 0; i < size; ++i) {
        n+=v[i];
    }
    return n;
}
/*************************************************************/
bool Solution::isNumber(string line, int &n) {
    char* p;
    int i, size = line.size();
    for (i = 0; i < size; ++i) {
        if (i == 0 && line[i] == '-') {
            continue;
        } else if (line[i] < '0' || line[i] > '9') {
            return false;
        }
    }
    n = strtol(line.c_str(), &p, 10);
    return true;
}
/*************************************************************/
