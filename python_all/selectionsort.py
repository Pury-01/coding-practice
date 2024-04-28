#!/usr/bin/python3

def SelectionSort():
    SelectionSort(list) {
        for (i from 0 to list.length) {
            SmallestElement = list[i]
            for (j form i to list.length) {
                if (SmallestElement > list[j]) {
                    SmallestElement = list[j]
                }
            }
            swap(list[i], SmallestElement)
        } 
    }
