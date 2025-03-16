from electronic import Electronic

class SmartTV(Electronic):
    def __init__(self, brand, year, screen_size):
        super().__init__(brand, year)
        self._screen_size = screen_size

    def get_screen_size(self):
        return self._screen_size

    def set_screen_size(self, screen_size):
        self._screen_size = screen_size

    def display_info(self):
        super().display_info()
        print(f"Screen Size: {self._screen_size} inches")