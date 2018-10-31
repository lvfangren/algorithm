/**
 * @param {number[]} row
 * @return {number}
 */
 // 思路没问题，就是判断邻座是否是情侣出发，不是就找到情侣关系交换位置，第一次写的时候问题出在情侣关系的判断上，看了参考才反应过来可以用^（异或）运算符来解决判断。
var minSwapsCouples = function(row) {
    let count=0;
    for (let i = 0; i < row.length; ) {
        let tmpVal=row[i]^1;
        if (row[i+1]!=tmpVal) {
          ++count;
          let tmpId=row.indexOf(tmpVal);
          [row[i+1],row[tmpId]]=[tmpVal,row[i+1]];
        }
        i+=2;
    }
    // console.log(row);
    return count;
};

console.log(minSwapsCouples([3,2,0,1]));
