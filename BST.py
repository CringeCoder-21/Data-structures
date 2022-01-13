class Node:
    def __init__(self, key):
        self.val = key
        self.left=None
        self.right=None
def insert(root, key):
    if root is None:
        return Node(key)
    else:
        if root.val == key:
            return root
        elif root.val < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
    return root
def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)
def preorder(root):
    if root:
        print(root.val)
        preorder(root.left)
        preorder(root.right)
def postorder(root):
    if root:
        postorder(root.left)
        postorder(root.right)
        print(root.val)
r = Node(50)
r = insert(r, 30)
r = insert(r, 20)
r = insert(r, 40)
r = insert(r, 70)
r = insert(r, 60)
r = insert(r, 80)
print('inorder:')
inorder(r)
print('Preorder:')
preorder(r)
print('postorder:')
postorder(r)