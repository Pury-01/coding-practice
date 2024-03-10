#!/usr/bin/python3

class User:
    id =89
    name = "no name"
    _password = None

    def _init_(self, new_name=None):
        self.is_new = True
        if new_name is not None:
            self.name = new_name

u = User("John")
u.name