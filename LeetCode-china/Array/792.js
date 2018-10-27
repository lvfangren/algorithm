/**
 * @param {string} S
 * @param {string[]} words
 * @return {number}
 */
var numMatchingSubseq = function(S, words) {
  let result=0;
  for (let item of words) {
    if (isSubsequence(item,S)) {
      ++result;
    }
  }
  return result;
};

function isSubsequence(s, t){
  let index = -1
  for (var i of s) {
    index = t.indexOf(i, index + 1)
    if (index === -1) return false
  }
  return true
};

console.log(numMatchingSubseq('abcde',["a", "bb", "acd", "ace"]));
