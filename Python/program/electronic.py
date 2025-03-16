# electronic.py
class Electronic:
    def __init__(self, brand, year):
        self._brand = brand
        self._year = year
    
    def get_brand(self):
        return self._brand
    
    def set_brand(self, brand):
        self._brand = brand
    
    def get_year(self):
        return self._year
    
    def set_year(self, year):
        self._year = year
    
    def display_info(self):
        print(f"Brand: {self._brand}, Year: {self._year}")