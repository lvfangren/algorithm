/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var inorderTraversal = function(root) {
  let num=[];
  const getPoint=(argRoot)=>{
    if (!argRoot) {
      return [];
    }
    getPoint(argRoot.left);
    num.push(argRoot.val);
    getPoint(argRoot.right);
  }

  getPoint(root);
  return num;
};
