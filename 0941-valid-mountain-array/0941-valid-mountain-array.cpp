class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3) return false;
        int peak = 0;

    for(int i=1 ;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
         peak = i;
        break;
        }
    }

    if(peak==0) return false;

    for(int j=1;j<=peak;j++){
        if(arr[j]<=arr[j-1])  return false;
    }

for(int k =peak+1; k<n ; k++){
    if(arr[k]>=arr[k-1]) return false;
}
return true;
    }
};