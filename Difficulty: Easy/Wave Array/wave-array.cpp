class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int n = arr.size();
        if(n%2!=0) n--;
        
        for(int i=0;i<n;i+=2){
            swap(arr[i],arr[i+1]);
        }
    }
};