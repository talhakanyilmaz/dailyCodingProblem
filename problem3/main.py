#!/usr/bin/python

class Node:
    def __init__(self, val, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

def serialize(root):
    if(root == None):
        return ''
    return root.val +  serialize(root.left) + serialize(root.right) 
