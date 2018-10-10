/**
 * @param {number[][]} people
 * @return {number[][]}
 */

 // ！！！！！！！！！！！嗯，结果不嫩全ac

var reconstructQueue = function(people) {
  // let result=[];
  // while (result.length<people.length) {
  //   var tmp=result.pop()?result.pop():[Infinity,Infinity];
  //   for (let i = 0; i < people.length; i++) {
  //     let item=people[i];
  //     if (item[1]<tmp[1]) {
  //       tmp=item;
  //       people.splice(i,1);
  //     }else if (item[1]==tmp[1]&&item[0]<tmp[0]) {
  //       tmp=item;
  //       people.slice(i,1);
  //     }
  //   }
  //
  //   console.log(tmp);
  //   result.push(tmp);
  // }
  // console.log('xsxsaxasx'+result);

  //先按身高排，从高到矮，身高相同按人数排。
   people.sort((a,b)=>{
    return a[0]<b[0]||(a[0]==b[0]&&a[1]>b[1])
  })
  // console.log(people);
  let result=[];
  // 重点在这里，排序后要对数据重新做插入处理
  for (let i = 0; i < people.length; i++) {
    result.splice(people[i][1],0,people[i]);
    // console.log(result);
  }
  // console.log(result);
  return result;
};


console.log(reconstructQueue([[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]));
