/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} s
 * @param {TreeNode} t
 * @return {boolean}
 */
var isSubtree = function(s, t) {
    if (!s||!t) {
      return false;
    }
    if (s.val==t.val) {
      if (s.left&&s.right&&t.left&&t.right) {
        return isSubtree(s.left,t.left)&&isSubtree(s.right,t.right)
      }
      if (!s.left&&s.right&&t.right&&!t.left) {
        return isSubtree(s.right,t.right);
      }else if (!s.left&&s.right&&!t.right&&!t.left) {
        return true;
      }
      if (s.left&&!s.right&&!t.right&&t.left) {
        return isSubtree(s.left,t.left);
      }else if(s.left&&!s.right&&!t.right&&!t.left){
        return true;
      }
      if (!s.left&&!s.right&&t.left&&t.right) {
        return false;
      }
      if (!s.left&&!s.right&&!t.left&&!t.right) {
        return true;
      }
      return false;
    }else {
      return isSubtree(s.left,t)||isSubtree(s.right,t)
    }

};
