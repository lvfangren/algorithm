/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var sumOfLeftLeaves = function(root) {
    if (!root) {
      return 0;
    }
    const getSum=(root,flag)=>{
      if (!root.left&&!root.right&&flag) {
        console.log(root.val);
        return root.val;
      }
      if (!root.left&&!root.right&&!flag) {
        return 0;
      }
      if(root.left&&root.right){
        return  getSum(root.left,true)+getSum(root.right,false);
      }
      if(root.left&&!root.right){
        return getSum(root.left,true)
      }
      if (root.right&&!root.left) {
        return getSum(root.right,false)
      }
    }
    return getSum(root,false);
};
