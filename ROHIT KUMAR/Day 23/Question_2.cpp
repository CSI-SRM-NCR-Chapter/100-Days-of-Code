class Solution {
public:
    int romanToInt(string s) {
         int temp=0;
        int n=s.length();
        int arr[n];
        for(int i=0; i<n; i++)
        {
            if(s[i]=='I')
            arr[i]= 1;
            else if(s[i]=='V')
            arr[i]= 5;
            else if(s[i]=='X')
            arr[i]= 10;
            else if(s[i]=='L')
            arr[i]= 50;
            else if(s[i]=='C')
            arr[i]= 100;
            else if(s[i]=='D')
            arr[i]=  500;
            else if(s[i]=='M')
            arr[i]= 1000;
        }
        
        for(int i=n-1; i>0; i--)
        {
            temp += arr[i];
            
            if(arr[i]>arr[i-1])
            temp -= 2*arr[i-1];   
        }
        temp += arr[0];
        return temp;
    }
};
