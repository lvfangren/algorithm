/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let arr=s.split(' ');
    let result=[];
    let tmp=[];
    for (let i = 0; i < arr.length; i++) {
      tmp=[...arr[i]].reverse();
      result.push(tmp.join(''))
      // console.log(tmp);
    }
    // console.log(result.join(' '));
    return result.join(' ');
};

console.log(reverseWords("Let's take LeetCode contest"));
