class Node:
    def __init__(self, key):
        self.val = key
        self.left = None
        self.right = None


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


def search(root, key):
    if root == None:
        print('The element not found!')
    elif root.val == key:
        print('The element is found!')
    elif root.val > key:
        search(root.left, key)
    else:
        search(root.right, key)


def delete(tree, value):
    temp = None
    if tree is None:
        return tree
    if value < tree.val:
        tree.left = delete(tree.left, value)
    elif val > tree.val:
        tree.right = delete(tree.right, value)
    else:
         if tree.left is None:
             temp = tree.right
             root = None
             return temp
         elif tree.right is None:
             temp = tree.left
             temp = None
             return temp
         temp = minvaluenode(tree)
         tree.data = temp.data
         tree.right = delete(tree.right, temp.data)
    return tree


def minvaluenode(tree):
    cur = tree
    while(cur.left != None):
        cur = cur.left
    return cur


tree = None
choice = 0
while choice != 7:
    print('\n 1. INSERT \n 2. PREORDER \n 3. INORDER \n 4. POSTORDER \n 5. DELETE \n 6. SEARCH \n 7. EXIT')
    choice = int(input('Enter your choice:'))
    if choice == 1:
        key = input('Enter value to be inserted:')
        tree = insert(tree, key)
    if choice == 2:
        preorder(tree)
    if choice == 3:
        inorder(tree)
    if choice == 4:
        postorder(tree)
    if choice == 5:
        val = input('Enter the value to be deleted:')
        tree = delete(tree, val)
    if choice == 6:
        find = input('Enter the value to be searched:')
        search(tree, find)
    if choice == 7:
        exit(0)
