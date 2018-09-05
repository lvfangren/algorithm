var levelOrder = function(root) {
    if(root === null || root.length === 0){
        return [];
    }

    // 使用map[level]的list儲存相同level節點的值
    var map = {};

    // 待處理節點的等待陣列，第一個要處理的當然就是root
    var waitlist = [ { level:0, node:root} ];

    // 處理到沒有待處理
    while(waitlist.length > 0){

        // 取出waitlist最後一個node來處理
        var cur = waitlist.pop();
        var node = cur.node;

        // 如果當前node沒有其他同level的node，產生一個該level的list來裝
        if(!map[cur.level]){
            map[cur.level] = [node.val];
        } else {
            map[cur.level].push(node.val);
        }

        // 有子節點放入待處理清單，注意right要先放，因為上面是抓最後一個放入的節點處理，left後放才會被先處理
        if(node.right){
            waitlist.push({level:cur.level+1, node:node.right});
        }

        if(node.left){
            waitlist.push({level:cur.level+1, node:node.left});
        }

    }
    var result = [];

    for(var i in map){
        result.push(map[i]);
    }

    return result;
};
