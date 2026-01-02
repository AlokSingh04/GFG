// User function template for C++
class Solution {
  public:
    vector<int> printUnsorted(vector<int>& arr) {
        // Code here
        int n = arr.size();
        int i,j;
        
        for(i=0;i<n-1;i++) if(arr[i] > arr[i+1]) break;
        if(i==n-1) return {0,0};
        for(j=n-1;j>0;j--) if(arr[j] < arr[j-1]) break;
        
        int max = *max_element(arr.begin()+i, arr.begin()+j+1);
        int min = *min_element(arr.begin()+i, arr.begin()+j+1);
        
        int s=0, e = n-1;
        while(s<i && arr[s]<=min) s++;
        while(e>j && arr[e]>=max) e--;
        
        return {s,e};
    }
};