class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int end1 = m-1;
       int end2 = n-1;
       int end = m+n-1;
        while (end1 >= 0 && end2 >= 0) {
        if(nums1[end1] >= nums2[end2]){
            nums1[end] = nums1[end1];
            end--;
            end1--;
        }
        else{
            nums1[end] = nums2[end2];
            end2--;
            end--;
        }
       }

       // one more while loop agar humara end1 -ve me chala jaye aur 
       //end2 naa ho tohh example 1 = 4,5,6  2 = 1,2,3

    while(end2>=0){
        nums1[end] = nums2[end2];
        end2--;
        end--;
    }
       

    }
};