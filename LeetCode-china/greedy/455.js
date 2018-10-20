/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
 // 贪心，注意贪心的思想。
var findContentChildren = function(g, s) {
    g.sort((a,b)=>a-b);
    s.sort((a,b)=>a-b);
    let i=0,j=0;
    for (; i < g.length&&j<s.length; j++) {
        if (g[i]<=s[j]) {
          i++;
        }
    }
    return i;
};
console.log(findContentChildren([0,2,3,2,1],[5,6,7,8]));
