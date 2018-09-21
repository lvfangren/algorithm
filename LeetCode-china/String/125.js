/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
  if (!s.trim()) {
    return true;
  }
  let resuStr='';
  s=s.toLocaleLowerCase();
  for (let i = 0; i < s.length; i++) {
    if ((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')) {
      resuStr+=s[i];
    }
  }
  if (resuStr) {
    let i=0,j=resuStr.length-1,flag=true;
    while (i<=j) {
      if (resuStr[i]!=resuStr[j]) {
        flag=false;
        break;
      }else {
        i++;
        j--;
      }
    }
    return flag;
  }else {
    return true;
  }
  // console.log(resuStr);
};


console.log(isPalindrome('aaaa'));
