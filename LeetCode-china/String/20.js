/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    if (!s.length) {
      return true;
    }
    if (s.length%2) {
      return false;
    }
    let stack=[];
    for (let i = 0; i < s.length; i++) {
      if (s[i]=='('||s[i]=='{'||s[i]=='[') {
        stack.push(s[i]);
      }else {
        if (s[i]=='}'&&stack.pop()!='{') {
          return false;
        }else if(s[i]==')'&&stack.pop()!='('){
          return false;
        }else if (s[i]==']'&&stack.pop()!='[') {
          return false;
        }
      }
    }
    if (!stack.length) {
      return true;
    }else {
      return false;
    }
};

console.log(isValid('[())]'));
