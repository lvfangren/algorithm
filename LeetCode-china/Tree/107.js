/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrderBottom = function(root) {
    if (!root) {
      return [];
    }
    let map={};
    let arr=[{dep:0,node:root}];
    while (arr.length) {
      let tmp=arr.pop();
      let node=tmp.node;
      if (!map[tmp.dep]) {
        map[tmp.dep]=[node.val];
      }else {
        map[tmp.dep].unshift(node.val);
      }
      if (node.left) {
        arr.push({dep:tmp.dep+1,node:node.left})
      }
      if (node.right) {
        arr.push({dep:tmp.dep+1,node:node.right})
      }
    }
    let result=[];
    for (let i in map) {
      result.push(map[i])
    }
    return result.reverse();
};
