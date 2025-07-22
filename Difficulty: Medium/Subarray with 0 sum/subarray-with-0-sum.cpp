class Solution {
  public:
    bool subArrayExists(vector<int>& arr){  
        unordered_map<int,int> SumCount;
        SumCount[0]=1;
        int sum=0,count=0;
    
        for(int num : arr){
            sum += num;
            if(SumCount.count(sum)){
                count += SumCount[sum];
            }
    
            SumCount[sum]++;
        }

        return count>0;
    }
};