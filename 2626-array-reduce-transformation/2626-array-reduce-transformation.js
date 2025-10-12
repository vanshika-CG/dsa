/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    for(i=0; i<nums.length ; i++){
   let res = fn(init, nums[i]);
       init = res;
    }
    return init;
};