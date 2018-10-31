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
var minDiffInBST = function(root) {
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
  let arr=inorderTraversal(root);
  let i=0,j=1;
  let result=Infinity;
  for (; j < arr.length; ) {
    result=Math.min(result,arr[j]-arr[i]);
    i++;
    j++;
  }
};
