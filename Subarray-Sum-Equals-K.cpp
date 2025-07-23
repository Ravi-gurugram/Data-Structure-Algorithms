class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

      unordered_map<int,int> m;
      m[0]=1 ;
      int preSum=0 , total=0;
      for(int i=0;i<nums.size();i++){

         preSum+=nums[i] ;
         if(m.count(preSum-k)){
              total+=m[preSum-k] ;
              m[preSum]++ ;
         }
         else
            m[preSum]++ ;

      }

return total ;



    }
};