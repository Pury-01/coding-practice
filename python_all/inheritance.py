#!/usr/bin/python3

class Human:
    def __init__(self,limbs):
        num_eyes=2
        num_ears=2
        num_nose=1
        self.limbs=limbs

    def eat(self):
        print("I can eat")
    def work(self):
        print("I can work")

class Male(Human):
    def __init__(self,name,age,limbs):
        super().__init__(limbs)

        self.name=name
        self.age=age

    def work(self):
        super().work()
        print("I can code")

    def display(self):
        print(f"My name is {male_1.name}, I am {male_1.age} years old and I have {male_1.limbs} limbs.")

male_1=Male("Vero",29,2)
male_1.work()
male_1.display()

