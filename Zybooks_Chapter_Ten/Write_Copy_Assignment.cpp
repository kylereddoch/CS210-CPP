#include <iostream>
using namespace std;

class CarCounter {
public:
    CarCounter();
    ~CarCounter();
    CarCounter& operator=(const CarCounter& objToCopy);
    void SetCarCount(const int setVal) {
        *carCount = setVal;
    }
    int GetCarCount() const {
        return *carCount;
    }
private:
    int* carCount;
};

CarCounter::CarCounter() {
    carCount = new int;
    *carCount = 0;
}

CarCounter::~CarCounter() {
    delete carCount;
}

// FIXME write copy assignment operator

/* Your solution goes here  */
CarCounter& CarCounter::operator=(const CarCounter& objToCopy) {

    if (this != &objToCopy) {
        delete carCount;
        carCount = new int;
        *carCount = *(objToCopy.carCount);
    }

    return *this;
}

int main() {
    CarCounter frontParkingLot;
    CarCounter backParkingLot;
    int count;

    cin >> count;

    frontParkingLot.SetCarCount(count);
    backParkingLot = frontParkingLot;

    cout << "Cars counted: " << backParkingLot.GetCarCount();

    return 0;
}