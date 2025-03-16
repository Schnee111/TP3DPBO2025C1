#pragma once
#include "electronic.cpp"

class SmartTV : public Electronic {
private:
    float screenSize;
public:
    SmartTV(std::string brand, int year, float screenSize)
        : Electronic(brand, year), screenSize(screenSize) {}
    ~SmartTV() { std::cout << "SmartTV destroyed\n"; }
    void displayInfo() const override {
        Electronic::displayInfo();
        std::cout << "Screen Size: " << screenSize << " inches" << std::endl;
    }
};