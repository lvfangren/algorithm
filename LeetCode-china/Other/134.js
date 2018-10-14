/**
 * @param {number[]} gas
 * @param {number[]} cost
 * @return {number}
 */
// 思考解题:首先两个数组元素差的和小于0肯定无解，大于0且能找到起点位置即AC
var canCompleteCircuit = function(gas, cost) {
    let sum=0,allSum=0,local=-1;
    for (let i = 0; i < gas.length; i++) {
      sum+=gas[i]-cost[i];
      allSum+=gas[i]-cost[i];
      if (sum<0) {
        local=i;
        sum=0;
      }
    }
    return allSum<0?-1:local+1;

    /*
    for(int i = 0; i < cost.length; i++){
           gas[i] -= cost[i];
       }
       int tank = 0, res = -1;
       for(int i = 0; i < gas.length * 2 - 1; i++){
           int idx = i % gas.length;
           // 更新油箱
           tank += gas[idx];
           // 如果油箱为负，说明走不到下一个加油站,做起点变化
           if(tank < 0){
               res = idx + 1;
               tank = 0;
           }
       }
       // 如果起点在最后一个加油站之后，说明无解
       return res >= gas.length ? -1 : res;

    */

};
console.log(canCompleteCircuit([3,4,5],[3,4,5]));
