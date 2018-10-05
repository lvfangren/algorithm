/**
 * @param {number[]} bills
 * @return {boolean}
 */
 // 刚刚开始时用了哈希表存，但是结果出错了，注意！！！！！！！
var lemonadeChange = function(bills) {
  let a=0,b=0;
  for (let variable of iterable) {
    if (variable==5) {
      a++;
    }else if (variable==10) {
      if (a<1) {
        return false;
      }
      a--;
      b++;
    }else {
      if (a>0&&b>0) {
        a--;
        b--;
      }else if (a>=3) {
        a-=3;
      }else {
        return false;
      }
    }
  }
};

console.log(lemonadeChange([5]));
