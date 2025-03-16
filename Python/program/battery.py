class Battery:
    def __init__(self, capacity, battery_life):
        self._capacity = capacity  # Kapasitas dalam mAh atau Wh
        self._battery_life = battery_life  # Daya tahan dalam jam

    def get_capacity(self):
        return self._capacity

    def set_capacity(self, capacity):
        self._capacity = capacity

    def get_battery_life(self):
        return self._battery_life

    def set_battery_life(self, battery_life):
        self._battery_life = battery_life

    def display_battery_info(self):
        print(f"Battery Capacity: {self._capacity} mAh, Battery Life: {self._battery_life} hours")