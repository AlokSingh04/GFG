// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = arr.size()-1; i>=0; i--){
            pq.push(arr[i]);
            arr.pop_back();
        }
        
        while(!pq.empty()){
            arr.push_back(pq.top());
            pq.pop();
        }
    }
};