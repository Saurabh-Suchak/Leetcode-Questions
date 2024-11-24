class ParkingSystem {
private: 
    int big;
    int small;
    int medium;
public:
    ParkingSystem(int big, int medium, int small) {
        // int big,small,medium;
        this->big = big;
        this->medium = medium;
        this->small = small;
        
        
    }
    
    bool addCar(int c) {
        if(c == 1 && big>0){
            big--;
            return true;
        }
        if(c == 2 && medium>0){
            medium--;
            return true;
        }
        if(c == 3 && small>0){
            small--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */