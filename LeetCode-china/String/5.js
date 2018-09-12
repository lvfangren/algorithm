/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(str) {
  if (!str) {
    return str;
  }
  let strLen = str.length;
  while (strLen) {
    if (strLen !== 1 && getMaxStr(strLen)) {
      return getMaxStr(strLen);
    }
    --strLen;
  }
  return str[0];
  function getMaxStr(argLen) {
    for (let i = 0; i <= str.length - argLen; i++) {
      let tmpStr = str.substr(i, argLen);
      let start = 0,
        end = tmpStr.length - 1,
        flag = true;
      while (start < end) {
        if (tmpStr[start] === tmpStr[end]) {
          start++;
          end--;
        } else {
          flag = false;
          break;
        }
      }
      if (flag) {
        return tmpStr;
      }
    }
    return '';
  }
};
