class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count =0;
        int size = flowerbed.size();
        for(int i=0; i<size ; i++){
            int left , right ;
            if(flowerbed[i]==0){
                if(i==0) left =0;
                else left = flowerbed[i-1];
                if(i==size-1) right = 0;
                else right = flowerbed[i+1];

                if(right==0 && left==0){
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count>=n;
    }
};