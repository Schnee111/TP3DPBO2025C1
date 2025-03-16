#pragma once
#include <iostream>

class Battery {
private:
    int capacity;
    int batteryLife;
public:
    Battery(int capacity, int batteryLife) : capacity(capacity), batteryLife(batteryLife) {}
    ~Battery() { std::cout << "Battery destroyed\n"; }
    int getCapacity() const { return capacity; }
    void setCapacity(int capacity) { this->capacity = capacity; }
    int getBatteryLife() const { return batteryLife; }
    void setBatteryLife(int batteryLife) { this->batteryLife = batteryLife; }
    void displayBatteryInfo() const {
        std::cout << "Battery Capacity: " << capacity << " mAh, Battery Life: " << batteryLife << " hours" << std::endl;
    }
};