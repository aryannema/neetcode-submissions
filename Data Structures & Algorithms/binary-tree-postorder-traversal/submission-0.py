# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def recursivePreorder(self, root, ans):
        if root is None:
            return

        
        self.recursivePreorder(root.left, ans)
        self.recursivePreorder(root.right, ans)
        ans.append(root.val)


    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:

        ans = []

        self.recursivePreorder(root, ans)

        return ans
        