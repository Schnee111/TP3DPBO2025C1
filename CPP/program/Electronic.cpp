#pragma once
#include <iostream>
#include <string>

class Electronic {
protected:
    std::string brand;
    int year;
public:
    Electronic(std::string brand, int year) : brand(brand), year(year) {}
    virtual ~Electronic() { std::cout << "Electronic device destroyed\n"; }
    std::string getBrand() const { return brand; }
    void setBrand(std::string brand) { this->brand = brand; }
    int getYear() const { return year; }
    void setYear(int year) { this->year = year; }
    virtual void displayInfo() const {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};