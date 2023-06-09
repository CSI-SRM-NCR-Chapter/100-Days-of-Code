class Solution {
public:
    string intToRoman(int num) {
        vector<string> v1={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> v2={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string res="";
        for(int i=0; num>0; i++){
            while(num>=v2[i]){
                res=res+v1[i];
                num=num-v2[i];

            }
        }
        return res;
        
    }
};
