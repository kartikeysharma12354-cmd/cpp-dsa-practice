class Solution {
public:
    void sortColors(vector<int>& arr) {
     int mid=0, high=arr.size()-1, low=0;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[high],arr[mid]);
                high--;
                
                
            }
        }
    }
};
