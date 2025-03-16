#pragma once
#include "electronic.cpp"
#include "battery.cpp"

class Smartphone : public Electronic {
private:
    int cameraMegapixels;
    Battery battery;
public:
    Smartphone(std::string brand, int year, int cameraMegapixels, int batteryCapacity, int batteryLife)
        : Electronic(brand, year), cameraMegapixels(cameraMegapixels), battery(batteryCapacity, batteryLife) {}
    ~Smartphone() { std::cout << "Smartphone destroyed\n"; }
    void displayInfo() const override {
        Electronic::displayInfo();
        std::cout << "Camera: " << cameraMegapixels << " MP" << std::endl;
        battery.displayBatteryInfo();
    }
};