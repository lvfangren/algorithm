/**
 * @param {number[]} nums
 * @return {number[][]}
 */
 // 有重复元素排列
 // 刚刚开始想这是和带重复的一样过程，支部过后面对所得结果做一次过滤重复的输出，发现不好实现。后又考虑利用hash存元素，不便利nums改成hash也是行不通，但是大体方向是对的。
var permuteUnique = function(nums) {
    const dfs=(res,nums,visit,tmp)=>{
      if (tmp.length===nums.length) {
        res.push(tmp.map(a=>a));
        return ;
      }
      for (let i = 0; i < nums.length; i++) {
        // 这里的两个判断用于解决造成重复的因素
        if (visit[i]) {
          continue ;
        }
        if (i>0&&nums[i]==nums[i-1]&&!visit[i-1]) {
          continue;
        }

        tmp.push(nums[i]);
        visit[i]=true;
        dfs(res,nums,visit,tmp);
        visit[i]=true;
        tmp.pop();
      }
    }

    if (nums.length===0) {
      return [];
    }

    nums.sort((a,b)=>a-b);

    let res=[],n=nums.length,visit=[];

    for (let i = 0; i < nums.length; i++) {
      visit[i]=false;
    }

    dfs(res,nums,visit,[]);
    // console.log(res);
    return res;
};

console.log(permuteUnique([1,1,2]));
