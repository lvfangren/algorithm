/**
 * @param {number} n
 * @return {boolean}
 */
 // 刚刚开始反应是递归求解，后面一组一组的测试数据发现有点博弈的感觉，首先：n《4肯定赢，n为4的倍数肯定输，其它情况想递归的，但是结果会NaN，细想了下是递归的思路但是不用递归来写，其它情况下若拿掉一定的数量能使剩余数为4就赢！
var canWinNim = function(n) {
  if (n<4) {
    return true;
  }
  return n%4!=0;
};

console.log(canWinNim(20));
