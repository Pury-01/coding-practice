#!/usr/bin/python3

class Circle:
    pi=3.142
    """Represents the class circle"""


    def __init__(self,radius):
        self.radius=radius

    def circumference(self):
        return 2 * self.pi * self.radius
    
    def Area(self):
        return Circle.pi *  self.radius * self.radius
    
small_circle=Circle(7)
print(f"The circumference of the circle is:{small_circle.circumference()}")
print(f"The Area of the circle is:{small_circle.Area()}")
