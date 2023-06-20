class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(targetCapacity == 0) return true;
        if(targetCapacity > jug1Capacity + jug2Capacity) return false;
        else
        {
            int g = gcd(jug1Capacity,jug2Capacity);
            return targetCapacity % g == 0;
        }
    }
};
