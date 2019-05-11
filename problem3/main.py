#!/usr/bin/python

class Node:
    def __init__(self, val, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

def serialize(root):
    if(root == None):
        return ''
    return root.val + ':' + serialize(root.left) + serialize(root.right)

def deserialize(s):
    string = s.split(':')
    node = None
    if(s != ''): node = Node('root')
    for str in string:
        if(str == ''):
            continue
        temp = node
        nodes = str.split('.')
        for value in nodes:
            if(value == 'left'):
                temp.left = Node(value)
                temp = temp.left
            elif(value == 'right'):
                temp.right = Node(value)
                temp = temp.right
        temp.val = str
    return node
