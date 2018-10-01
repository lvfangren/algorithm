/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
// 还是需要判断下数据越界问题
  if (x<0||x>Math.pow(2,32)-1) {
    return false;
  }
  if (x<10) {
    return true;
  }
  let num=x;
  let low=x%10;
  x=parseInt(x/10);
  while (x) {
    low*=10;
    low+=x%10;
    x=parseInt(x/10);
  }
  return low==num;
};

console.log(isPalindrome(101));
