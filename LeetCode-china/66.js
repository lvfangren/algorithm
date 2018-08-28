/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    /*let str=digits.join('');
    // console.log(str);
    // 在这里发生溢出
    let result=(parseInt(str)+1).toString();
    // console.log(result);
    let arr=result.split('');
    return arr.map(x=>+x)*/
    let flag=1;
    for (var i = digits.length-1; i >=0; i--) {
      digits[i]+=flag;
      if (digits[i]>=10) {
        digits[i]%=10;
        // 最大9+1，故进位（flag）只能是1
        flag=1;
      }else {
        flag=0;
      }
    }
    if (flag>0) {
      digits.unshift(1);
    }
    return digits;
};

let arr=[6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3];
console.log(plusOne([1,2,3]));
