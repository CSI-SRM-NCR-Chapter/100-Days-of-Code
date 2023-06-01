class ParkingSystem {
    int s[3];
public:
    ParkingSystem(int big, int medium, int small) {
        s[0] = big;
        s[1] = medium;
        s[2] = small;
    }
    
    bool addCar(int carType) {
        if (s[carType-1] <= 0) return false;
        s[carType-1]--;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
