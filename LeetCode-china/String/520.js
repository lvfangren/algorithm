/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {
      if (/^[A-Z]+$/g.test(word)||/^[A-Z]{1,1}[a-z]+$/g.test(word)||/^[a-z]+$/g.test(word)) {
        return true
      }else {
        return false
      }
};
console.log(detectCapitalUse('csdvsd'));
