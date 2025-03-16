from laptop import Laptop
from smartphone import Smartphone
from smartwatch import Smartwatch
from smart_tv import SmartTV

def add_electronic_manually():
    print("Select electronic type:")
    print("1. Laptop")
    print("2. Smartphone")
    print("3. Smart TV")
    print("4. Smartwatch")
    choice = int(input("Enter choice: "))

    brand = input("Enter brand: ")
    year = int(input("Enter year: "))

    if choice in [1, 2, 4]:  # Perangkat dengan baterai
        battery_capacity = int(input("Enter battery capacity (mAh): "))
        battery_life = int(input("Enter battery life (hours): "))

    if choice == 1:
        ram_size = int(input("Enter RAM size (GB): "))
        return Laptop(brand, year, ram_size, battery_capacity, battery_life)
    elif choice == 2:
        camera_megapixels = int(input("Enter camera megapixels: "))
        return Smartphone(brand, year, camera_megapixels, battery_capacity, battery_life)
    elif choice == 3:
        screen_size = float(input("Enter screen size (inches): "))
        return SmartTV(brand, year, screen_size)
    elif choice == 4:
        camera_megapixels = int(input("Enter camera megapixels: "))
        strap_material = input("Enter strap material: ")
        water_resistance = input("Enter water resistance rating: ")
        heart_rate_monitor = input("Has heart rate monitor? (yes/no): ").lower() == "yes"
        return Smartwatch(brand, year, camera_megapixels, battery_capacity, battery_life, strap_material, water_resistance, heart_rate_monitor)
    else:
        print("Invalid choice!")
        return None

def main():
    electronics = [
        Laptop("Dell", 2022, 16, 5000, 10),
        Smartphone("Samsung", 2023, 108, 4500, 24),
        SmartTV("LG", 2021, 55),
        Smartwatch("Apple", 2022, 12, 300, 18, "Silicone", "IP68", True)
    ]
    
    while True:
        print("\nElectronic Devices:")
        for i, device in enumerate(electronics, 1):
            print(f"{i}. {device.get_brand()} ({device.get_year()})")
        
        print("\nOptions:")
        print("1. Add new electronic device")
        print("2. Display all device details")
        print("3. Exit")
        choice = input("Enter your choice: ")
        
        if choice == "1":
            new_device = add_electronic_manually()
            if new_device:
                electronics.append(new_device)
                print("Device added successfully!")
        elif choice == "2":
            print("\nElectronic Device Details:\n")
            for device in electronics:
                print("---------------------------------------------------------")
                device.display_info()
                print("---------------------------------------------------------\n")
        elif choice == "3":
            print("Exiting program.")
            break
        else:
            print("Invalid choice, please try again.")

if __name__ == "__main__":
    main()
