from smartphone import Smartphone
from battery import Battery

class Smartwatch(Smartphone):
    def __init__(self, brand, year, camera_megapixels, battery_capacity, battery_life, strap_material, water_resistance, heart_rate_monitor):
        super().__init__(brand, year, camera_megapixels, battery_capacity, battery_life)
        self._strap_material = strap_material
        self._water_resistance = water_resistance
        self._heart_rate_monitor = heart_rate_monitor

    def get_strap_material(self):
        return self._strap_material

    def set_strap_material(self, strap_material):
        self._strap_material = strap_material

    def get_water_resistance(self):
        return self._water_resistance

    def set_water_resistance(self, water_resistance):
        self._water_resistance = water_resistance

    def has_heart_rate_monitor(self):
        return self._heart_rate_monitor

    def set_heart_rate_monitor(self, heart_rate_monitor):
        self._heart_rate_monitor = heart_rate_monitor

    def display_info(self):
        super().display_info()
        print(f"Strap Material: {self._strap_material}, Water Resistance: {self._water_resistance}, Heart Rate Monitor: {'Yes' if self._heart_rate_monitor else 'No'}")
