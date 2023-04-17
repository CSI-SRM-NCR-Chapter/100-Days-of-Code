class Solution {
public:
    int trap(vector<int>& height) {

        int length = 0, rain = height.size()-1;

        int length_max = 0, rain_max = 0, res = 0;

        while(length <= rain){

            if(height[length] <= height[rain]){

                if(height[length] >= length_max){

                    length_max = height[length];

                }
                else{

                    res += length_max - height[length];

                }

                length++;

            }

            else{

                if (height[rain] >= rain_max){

                    rain_max = height[rain];

                }

                else{

                    res += rain_max - height[rain];

                }

                rain--;

            }

        }

        return res;

    }
        
};
