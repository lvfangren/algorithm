/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var leafSimilar = function(root1, root2) {
    if (!root1||!root2) {
      return false;
    }
    const getTree=(root)=>{
      if (!root.left&&!root.right) {
        return root.val;
      }
      let tmp=[];
      if (root.left) {
        tmp.push(getTree(root.left));
      }
      if (root.right) {
        tmp.push(getTree(root.right));
      }
      return tmp;
    }
    console.log(getTree(root1));
    console.log(getTree(root2));
    return getTree(root1).toString()==getTree(root2).toString();
};
