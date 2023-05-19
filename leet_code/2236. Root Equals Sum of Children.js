// https://leetcode.com/problems/root-equals-sum-of-children/

var checkTree = function(root) {
     return root.val == root.left.val + root.right.val;
};