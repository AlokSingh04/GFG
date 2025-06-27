class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[i]){
                    arr.insert(arr.begin()+j,arr[i]);
                    arr.erase(arr.begin()+i+1);
                }
            }
        }
    }
};