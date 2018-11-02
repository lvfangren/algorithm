/**
 * @param {string} S
 * @return {string[]}
 */

 //同Array分类78题，区别在于这里用的是递归解法.
var letterCasePermutation = function(S) {
      const dfs=(res,index,S)=>{
        if (S.length==index) {
          res.push(S);
          return;
        }
        dfs(res,index+1,S);
        if (S[index]>='A'&&S[index]<='Z') {
          let tmp=S.split('');
          tmp[index]=tmp[index].toLowerCase();
          dfs(res,index+1,tmp.join(''));
        }else if (S[index]>='a'&&S[index]<='z') {
          let tmp=S.split('');
          tmp[index]=tmp[index].toUpperCase();
          dfs(res,index+1,tmp.join(''));
        }
      }
      let res=[];
      dfs(res,0,S);
      return res;
};

console.log(letterCasePermutation('C'));
