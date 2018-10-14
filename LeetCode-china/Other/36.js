/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function(board) {
  let objRow={},objCol={};
  let box=[];
  for (let i = 0; i < 9; i++) {
    let flag=true;
    for (let j = 0; j < 9; j++) {
      if (board[i][j]!='.') {
        if (!objRow[board[i][j]]) {
          objRow[board[i][j]]=true;
        }else {
          flag=false;
        }
      }
      if (board[j][i]!='.') {
        if (!objCol[board[j][i]]) {
          objCol[board[j][i]]=true;
        }else {
          flag=false;
        }
      }
      let id=3*parseInt(i/3)+parseInt(j/3);
      box[id]+=board[i][j]?board[i][j]:'';
    }
    if (!flag) {
      // console.log(objCol,objRow);
      return flag;
    }
    objRow={};
    objCol={};
  }
  // console.log(box);
  for (let i = 0; i < box.length; i++) {
    let obj={};
    for (let variable of box[i]) {
      if (+variable) {
        if (obj[variable]) {
          return false;
        }else {
          obj[variable]=true;
        }
      }
    }
  }
  return true;
};

console.log(isValidSudoku([
  ["8","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]));
