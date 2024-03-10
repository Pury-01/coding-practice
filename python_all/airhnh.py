class BaseGeometry:
    def __init__(self, length, width):
        self.length=length
        self.width=width

    def area(self):
        if self.length <= 0 or self.width <= 0:
            raise Exception("area() is not implemented")
        return self.length * self.width

area_of=BaseGeometry(5,7)
try:
    area=area_of.area()
except  Exception as e:
    print("Error:", e)
print(area_of.area())

class Volume(BaseGeometry):
    def __init__(self, length, width, height):
        super().__init__(length, width)
        self.height=height

    def cube_volume(self):
        return self.area() * self.height

    def circumference(self):
        return 2 * (self.height + self.width +self.height)
     
cuboid_volume=Volume(6, 7,  3)
print(cuboid_volume.cube_volume())
print(cuboid_volume.circumference())


