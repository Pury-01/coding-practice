#!/usr/bin/python3

class Flight:
    def __init__(self, capacity):
        self.capacity = capacity
        self.passengers = []

    def add_passenger(self, name):
        if not self.open_seats():
            return False
        self.passengers.append(name)
        return True

    def open_seats(self):
        return self.capacity -len(self.passengers)

flight = Flight(3)

people = ["mary","Jane", "Mercy", "Joel"]
for people in people:
    success = flight.add_passenger(people)
    if success:
        print(f"Added {people} to flight successfully.")
    else:
        print(f"No available seats for {people}.")