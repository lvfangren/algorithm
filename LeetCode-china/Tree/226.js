/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var invertTree = function(root) {
    if (!root||(!root.left&&!root.right)) {
      return root;
    }
    let tmp=root.left;
    root.left=invertTree(root.right);
    root.right=invertTree(tmp);
// 不知道为什么这里用解构答案会出错、
// [root.left,root.right]=[invertTree(root.right),invertTree(root.right)];
    return root;
};
