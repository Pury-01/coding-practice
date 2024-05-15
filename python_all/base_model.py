#!/usr/bin/python3
from uuid import uuid4
import datetime

class BaseModel:
    def __init__(self):
        self.id = str(uuid4())
        self.created_at = datetime.datetime.now().isoformat()  # Convert current datetime to ISO format
        self.updated_at = datetime.datetime.now().isoformat()
    def __str__(self):
        return f"[{self.__class__.__name__}] ({self.id}) {self.__dict__}"

    def save(self):
        return self.updated_at
     
    def to_dict(self):
        return {key: value for key, value in self.__dict__.items()}
