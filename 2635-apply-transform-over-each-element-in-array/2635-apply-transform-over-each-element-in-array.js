/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
     let num = []; 
    for(let i=0; i<arr.length; i++){
       num[i] = fn(arr[i],i);
    }
    return num;
};