class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
            answer.push_back("FizzBuzz");
            }
            else if(i%3==0){
                answer.push_back("Fizz");
            }
            else if(i%5==0){
                answer.push_back("Buzz");
            }
            else{
                string a=to_string(i);
                answer.push_back(a);
            }
        }
        return answer;
    }
};