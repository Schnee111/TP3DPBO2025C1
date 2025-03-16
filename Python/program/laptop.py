from electronic import Electronic
from battery import Battery

class Laptop(Electronic):
    def __init__(self, brand, year, ram_size, battery_capacity, battery_life):
        super().__init__(brand, year)
        self._ram_size = ram_size
        self._battery = Battery(battery_capacity, battery_life)  # Composition

    def get_ram_size(self):
        return self._ram_size

    def set_ram_size(self, ram_size):
        self._ram_size = ram_size

    def display_info(self):
        super().display_info()
        print(f"RAM Size: {self._ram_size} GB")
        self._battery.display_battery_info()