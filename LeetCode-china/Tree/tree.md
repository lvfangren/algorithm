# Javascript中的特殊数据结构之树

## 开始
众所周知，JS是弱类型语言，最近用JS刷些树，链表这些相关题目的时候，感觉很.....

用JS解题的答案好像不是很多，本文也是对自己的JS刷题的总结！


## 数据结构之树结构
树是非线性结构。相关知识点：
1. 树的遍历，存储结构

    常考：树的性质，树的遍历方式，存储方式

2. 二叉树，二叉树&&树&&森林的转换

    常考：二叉树&&树&&森林的转换，二叉排序树平均查找长度

3. 哈夫曼树，构造和编码

参看：数据结构教程第四版 李蠢葆编  清华出版社出版

## 题目参看

[LeetCode 235 二叉搜索树的最近公共祖先](www.baidu.com)

  个人思路：刚刚开始想先判断给定的两个节点是否在同一颗子树上，如果不在：直接返根节点。如果在，记录两个节点的深度，深度不同返深度小的节点，深度相同返上层公共父节点。

  实现时问题出在深度的记录和相同深度的父节点得出。最后参看别人的实现思路，最终结果如下：

```
var lowestCommonAncestor = function(root, p, q) {
    while(true){
        let value =  root.val;
//判断给定的两个节点是否在同一颗子树上
        if(p.val >= value && value >= q.val || p.val <= value && value <= q.val){
            return root;
        } else if(p.val > value && q.val > value){
          //俩节点与右子树时
            root =  root.right;
        } else {
          //俩节点与左子树时
            root =  root.left;
        }
    }
};

```

[LeetCode 235 二叉搜索树的最近公共祖先](www.baidu.com)

  个人思路：刚刚开始想先判断给定的两个节点是否在同一颗子树上，如果不在：直接返根节点。如果在，记录两个节点的深度，深度不同返深度小的节点，深度相同返上层公共父节点。

  实现时问题出在深度的记录和相同深度的父节点得出。最后参看别人的实现思路，最终结果如下：

```
var lowestCommonAncestor = function(root, p, q) {
    while(true){
        let value =  root.val;
//判断给定的两个节点是否在同一颗子树上
        if(p.val >= value && value >= q.val || p.val <= value && value <= q.val){
            return root;
        } else if(p.val > value && q.val > value){
          //俩节点与右子树时
            root =  root.right;
        } else {
          //俩节点与左子树时
            root =  root.left;
        }
    }
};

```





[更多题解](github.com/lvfangren/algorithm)


## [LeetCode平台部分题解参看](github.com/lvfangren/algorithm)

注：有问题可以直接issues

## 其它大牛题解
[skyyen999](https://skyyen999.gitbooks.io/-leetcode-with-javascript/content/questions/235md.html)

[21DaysLearningCoding](https://github.com/21DaysLearningCoding/Algorithm)



## 总结
题目难度均不高，每道题基本上都能得到思路，但是运用JS做的题目还是太少，有点不习惯树，链表等数据结构的实现，几乎每道题目都要花很久才能A掉。
