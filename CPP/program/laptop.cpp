#pragma once
#include "electronic.cpp"
#include "battery.cpp"

class Laptop : public Electronic {
private:
    int ramSize;
    Battery battery;
public:
    Laptop(std::string brand, int year, int ramSize, int batteryCapacity, int batteryLife)
        : Electronic(brand, year), ramSize(ramSize), battery(batteryCapacity, batteryLife) {}
    ~Laptop() { std::cout << "Laptop destroyed\n"; }
    void displayInfo() const override {
        Electronic::displayInfo();
        std::cout << "RAM Size: " << ramSize << " GB" << std::endl;
        battery.displayBatteryInfo();
    }
};