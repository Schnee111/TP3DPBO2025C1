from electronic import Electronic
from battery import Battery

class Smartphone(Electronic):
    def __init__(self, brand, year, camera_megapixels, battery_capacity, battery_life):
        super().__init__(brand, year)
        self._camera_megapixels = camera_megapixels
        self._battery = Battery(battery_capacity, battery_life)  # Composition

    def get_camera_megapixels(self):
        return self._camera_megapixels

    def set_camera_megapixels(self, camera_megapixels):
        self._camera_megapixels = camera_megapixels

    def display_info(self):
        super().display_info()
        print(f"Camera: {self._camera_megapixels} MP")
        self._battery.display_battery_info()