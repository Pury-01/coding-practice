#!/usr/bin/python3
class CarDesign:
    mileage=0   #class object variable
    def __init__(self,name,color):
        self.car_name=name   #attributes  self.car_name
        self.car_color=color
        #self.milleage=0

    def display(self,engine):
        print(f"Hi I am {self.car_name } and my engine is {engine}")
    def update_mileage(self,mileage_number):
        self.mileage+=1


car_1=CarDesign("mercedes", "blue")   #object/instance car_1
#car_2=CarDesign()
car_1.update_mileage(1)
print(car_1.mileage)

print(car_1.car_name,car_1.car_color)
car_1.display("4wheel")
