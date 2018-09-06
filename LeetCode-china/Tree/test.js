var levelOrder = function(root) {
  if (!root) {
    return [];
  }
  let map={};

  let waitlist=[{dep:0,node:root}];
  while (waitlist.length) {
    let cur=waitlist.pop();
    let node=cur.node;
    if (!map[cur.dep]) {
      map[cur.dep]=[node.val];
    }else {
      map[cur.dep].push(node.val);
    }
    if (node.right) {
      waitlist.push({dep:cur.dep+1,node:node.right})
    }
    if (node.left) {
      waitlist.push({dep:cur.dep+1,node:node.left})
    }

  }

  var result = [];

  for(var i in map){
    result.push(map[i]);
  }

  return result;
}
