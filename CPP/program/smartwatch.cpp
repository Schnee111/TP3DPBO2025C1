#pragma once
#include "smartphone.cpp"

class Smartwatch : public Smartphone {
private:
    std::string strapMaterial;
    std::string waterResistance;
    bool heartRateMonitor;
public:
    Smartwatch(std::string brand, int year, int cameraMegapixels, int batteryCapacity, int batteryLife, std::string strapMaterial, std::string waterResistance, bool heartRateMonitor)
        : Smartphone(brand, year, cameraMegapixels, batteryCapacity, batteryLife), strapMaterial(strapMaterial), waterResistance(waterResistance), heartRateMonitor(heartRateMonitor) {}
    ~Smartwatch() { std::cout << "Smartwatch destroyed\n"; }
    void displayInfo() const override {
        Smartphone::displayInfo();
        std::cout << "Strap Material: " << strapMaterial << ", Water Resistance: " << waterResistance << ", Heart Rate Monitor: " << (heartRateMonitor ? "Yes" : "No") << std::endl;
    }
};