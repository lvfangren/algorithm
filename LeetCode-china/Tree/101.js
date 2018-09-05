/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var isSymmetric = function(root) {
  if (!root) {
    return true;
  }
  var TFBOY=function(a,b){
    if (!a&&!b) {
      return true;
    }else if (a&&b) {
      if (a.val===b.val) {
        return TFBOY(a.left,b.right)&&TFBOY(a.right,b.left);
      }
    }
    return false;
  }
  return TFBOY(root.left,root.right);
};
