/* main.cpp */
#include "laptop.cpp"
#include "smartphone.cpp"
#include "smart_tv.cpp"
#include "smartwatch.cpp"
#include <vector>
#include <memory>

void addElectronicManually(std::vector<std::unique_ptr<Electronic>>& electronics) {
    std::cout << "Select electronic type:\n";
    std::cout << "1. Laptop\n";
    std::cout << "2. Smartphone\n";
    std::cout << "3. Smart TV\n";
    std::cout << "4. Smartwatch\n";
    int choice;
    std::cin >> choice;

    std::string brand;
    int year;
    std::cout << "Enter brand: ";
    std::cin >> brand;
    std::cout << "Enter year: ";
    std::cin >> year;

    if (choice == 1) {
        int ramSize, batteryCapacity, batteryLife;
        std::cout << "Enter RAM size (GB): ";
        std::cin >> ramSize;
        std::cout << "Enter battery capacity (mAh): ";
        std::cin >> batteryCapacity;
        std::cout << "Enter battery life (hours): ";
        std::cin >> batteryLife;
        electronics.push_back(std::make_unique<Laptop>(brand, year, ramSize, batteryCapacity, batteryLife));
    } else if (choice == 2) {
        int cameraMegapixels, batteryCapacity, batteryLife;
        std::cout << "Enter camera megapixels: ";
        std::cin >> cameraMegapixels;
        std::cout << "Enter battery capacity (mAh): ";
        std::cin >> batteryCapacity;
        std::cout << "Enter battery life (hours): ";
        std::cin >> batteryLife;
        electronics.push_back(std::make_unique<Smartphone>(brand, year, cameraMegapixels, batteryCapacity, batteryLife));
    } else if (choice == 3) {
        float screenSize;
        std::cout << "Enter screen size (inches): ";
        std::cin >> screenSize;
        electronics.push_back(std::make_unique<SmartTV>(brand, year, screenSize));
    } else if (choice == 4) {
        int cameraMegapixels, batteryCapacity, batteryLife;
        std::string strapMaterial, waterResistance;
        bool heartRateMonitor;
        std::cout << "Enter camera megapixels: ";
        std::cin >> cameraMegapixels;
        std::cout << "Enter battery capacity (mAh): ";
        std::cin >> batteryCapacity;
        std::cout << "Enter battery life (hours): ";
        std::cin >> batteryLife;
        std::cout << "Enter strap material: ";
        std::cin >> strapMaterial;
        std::cout << "Enter water resistance rating: ";
        std::cin >> waterResistance;
        std::cout << "Has heart rate monitor? (1 for Yes, 0 for No): ";
        std::cin >> heartRateMonitor;
        electronics.push_back(std::make_unique<Smartwatch>(brand, year, cameraMegapixels, batteryCapacity, batteryLife, strapMaterial, waterResistance, heartRateMonitor));
    } else {
        std::cout << "Invalid choice!\n";
    }
}

int main() {
    std::vector<std::unique_ptr<Electronic>> electronics;
    electronics.push_back(std::make_unique<Laptop>("Dell", 2022, 16, 5000, 10));
    electronics.push_back(std::make_unique<Smartphone>("Samsung", 2023, 108, 4500, 24));
    electronics.push_back(std::make_unique<SmartTV>("LG", 2021, 55));
    electronics.push_back(std::make_unique<Smartwatch>("Apple", 2022, 12, 300, 18, "Silicone", "IP68", true));

    while (true) {
        std::cout << "\nElectronic Devices:\n";
        for (size_t i = 0; i < electronics.size(); ++i) {
            std::cout << i + 1 << ". " << electronics[i]->getBrand() << " (" << electronics[i]->getYear() << ")\n";
        }
        std::cout << "\nOptions:\n";
        std::cout << "1. Add new electronic device\n";
        std::cout << "2. Display all device details\n";
        std::cout << "3. Exit\n";
        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            addElectronicManually(electronics);
        } else if (choice == 2) {
            std::cout << "\nElectronic Device Details:\n";
            for (const auto& device : electronics) {
                std::cout << "---------------------------------------------------------\n";
                device->displayInfo();
                std::cout << "---------------------------------------------------------\n\n";
            }
        } else if (choice == 3) {
            std::cout << "Exiting program.\n";
            break;
        } else {
            std::cout << "Invalid choice, please try again.\n";
        }
    }
    return 0;
}
