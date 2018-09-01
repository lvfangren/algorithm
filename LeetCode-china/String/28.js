/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
  if (!needle.trim().length) {
    return 0;
  }
  return haystack.indexOf(needle);
};
console.log(strStr(' ','bba'));
