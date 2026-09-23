# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def recursiveInorder(self, root, ans):
        if root is None:
            return
        
        self.recursiveInorder(root.left, ans)
        ans.append(root.val)
        self.recursiveInorder(root.right, ans)

    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:

        ans = []

        self.recursiveInorder(root, ans)

        return ans
        